#https://developers.google.com/drive/api/v3/resumable-upload
#https://developers.google.com/drive/api/v3/manage-uploads
#https://developers.google.com/drive/api/v2/reference/files/insert
from __future__ import print_function
import os
from apiclient import errors
from apiclient.http import MediaFileUpload, MediaIoBaseDownload
from apiclient.discovery import build
from httplib2 import Http
from oauth2client import file, client, tools
import mimetypes

# Authentication. Setup the Drive v3 API
SCOPES = 'https://www.googleapis.com/auth/drive.file'
store = file.Storage('credentials.json')
creds = store.get()
if not creds or creds.invalid:
    flow = client.flow_from_clientsecrets('client_secret.json', SCOPES)
    creds = tools.run_flow(flow, store)
DRIVE = build('drive', 'v2', http=creds.authorize(Http()))
# Upload image
def upload_files(drive_api,filepath):
    mimeType=mimetypes.guess_type(filepath)[0]
    print('mimeType guessed is: %s'%mimeType)
    size=os.path.getsize(filepath)
    size=size/1024.0/1024.0 #convert byte to MB
    print('File size (in MB ) is: %.4f'%size)
    if size>=5.0:
        media_body = MediaFileUpload(filepath, mimetype=mimeType,resumable=True)
    else:
        media_body = MediaFileUpload(filepath, mimetype=mimeType)

    filename=os.path.basename(filepath)#temporary for testing
    body={
    'title':filename,#save file on Google Drive with original name
    'description':'this is description',
    'mimeType':mimeType
    }
    try:
        result=drive_api.files().insert(body=body,media_body=media_body).execute()
        if result:
            print('Uploaded "%s"'%filename)
            print('File ID: %s' % result.get('id'))
    except errors.HttpError, error:
        print('An error occurred: %s' % error)
upload_files(DRIVE,'/media/dinhthong/DATA/DT_Python_codebase/workwithtxt.txt')
