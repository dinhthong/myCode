#https://developers.google.com/drive/api/v3/manage-downloads
from __future__ import print_function
import os, io
from apiclient.http import MediaFileUpload, MediaIoBaseDownload
from apiclient.discovery import build
from httplib2 import Http
from oauth2client import file, client, tools
import mimetypes
mimetypes.add_type('application/vnd.google-apps.document', '.md')
# Authentication. Setup the Drive v3 API
SCOPES = 'https://www.googleapis.com/auth/drive.file'
store = file.Storage('credentials.json')
creds = store.get()
if not creds or creds.invalid:
    flow = client.flow_from_clientsecrets('client_secret.json', SCOPES)
    creds = tools.run_flow(flow, store)
drive_service = build('drive', 'v3', http=creds.authorize(Http()))

file_id='1uJQlAl_MnImOk0rEtID48H5hQQ7VdydY'
request = drive_service.files().get_media(fileId=file_id)
fh = io.BytesIO()
downloader = MediaIoBaseDownload(fh, request)
done = False
while done is False:
    status, done = downloader.next_chunk()
    print("Download %d%%." % int(status.progress() * 100))
with io.open('ok.jpg','wb') as f:
    fh.seek(0)
    f.write(fh.read())
