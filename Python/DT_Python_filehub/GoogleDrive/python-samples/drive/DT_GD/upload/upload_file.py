from __future__ import print_function
import os
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
DRIVE = build('drive', 'v3', http=creds.authorize(Http()))
# Call the Drive v3 API
FILES=(
('hello.txt',None),
('hello.txt','application/vnd.google-apps.document'),#remember view as Google Docs apps?
('CONTRIBUTING.md','application/vnd.google-apps.document')
)
for filename, mimeType in FILES:
    metadata={'name':filename}
    if mimeType:
        metadata['mimeType']=mimeType
    result=DRIVE.files().create(body=metadata,media_body=filename).execute()
    if result:
        print('Uploaded "%s"(%s))'%(filename,result['mimeType']))
        print ("ID: %s"%result['id'])

#Using the export to pdf API. And then write the content after exporting to pdf to a .pdf file!
if result:
    MIMETYPE="application/pdf"
    data=DRIVE.files().export(fileId=result['id'],mimeType=MIMETYPE).execute()
    if data:
        fn='%s.pdf' % os.path.splitext(filename)[0]
        with open(fn,'wb') as fh:
            fh.write(data)
        print('Downloaded "%s"(%s)'% (fn,MIMETYPE))
