#https://developers.google.com/drive/api/v2/reference/children/list
#https://stackoverflow.com/questions/15372408/getting-file-metadata-from-google-api-in-python
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
def print_files_in_folder(service, folder_id):
  """Print files belonging to a folder.
  Args:
    service: Drive API service instance.
    folder_id: ID of the folder to print files from.
  """
  page_token = None
  while True:
    try:
      param = {}
      if page_token:
        param['pageToken'] = page_token
      children = service.children().list(
          folderId=folder_id, **param).execute()

      for child in children.get('items', []):
        print('File Id: %s' % child['id'])
        print(child)
        drive_file = service.files().get(fileId=child['id']).execute()
        #print (drive_file)
        for key in drive_file:
            print(key)
            print(drive_file[key])
        print("Print useful information---***")
        print(drive_file['title'])
        print(drive_file['webContentLink'])
        print(drive_file['mimeType'])
        print(drive_file['quotaBytesUsed'])
      page_token = children.get('nextPageToken')
      if not page_token:
        break
    except errors.HttpError, error:
      print('An error occurred: %s' % error)
      break
print_files_in_folder(DRIVE,'root')
print ("Run ok")
