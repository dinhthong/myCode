#https://developers.google.com/drive/api/v3/manage-uploads
from __future__ import print_function
import os
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
filename='quad_1.jpg'
mimeType='image/jpeg'

metadata={'name':filename}
metadata['mimeType']=mimeType
result=DRIVE.files().insert(body=metadata,media_body=filename,fields='id').execute()
if result:
    print('Uploaded "%s"'%filename)
    print ('File ID: %s' % result.get('id'))
#Using the export to pdf API. And then write the content after exporting to pdf to a .pdf file!
