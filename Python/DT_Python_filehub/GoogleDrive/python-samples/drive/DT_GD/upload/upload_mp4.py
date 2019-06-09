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
filename='Pixhawk_Protocol.mp4'
#mimeType='application/vnd.google-apps.video'
mimeType='video/mp4'
media_body = MediaFileUpload(filename, mimetype=mimeType,resumable=True)
body={
'title':filename,
'description':'this is description',
'mimeType':mimeType
}
try:
    result=DRIVE.files().insert(body=body,media_body=media_body).execute()
    if result:
        print('Uploaded "%s"'%filename)
        print ('File ID: %s' % result.get('id'))
except errors.HttpError, error:
    print('An error occurred: %s' % error)
#Using the export to pdf API. And then write the content after exporting to pdf to a .pdf file!
