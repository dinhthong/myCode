# Preface
To be able to work with Google Drive as I use it my main data storage solution!

+ Quickly upload files, folders onto my GD on the GD's top path. -> Manually organize them later.
+ Use other's computer? -> Need to download a file/folder -> Download python script from Github -> authen via SMS -> search, choose and get the link -> Sign out and DONE.
+ Automatically copy a folder/files from a GD's link onto my GD folder. ( scan, download to temporary local folder, upload )

# Todos

+ Change file/folder sharable state. Get sharable link by file or folder ID
+ Sequently update. Wait to upload finished.
+ Download from file URL on Google Drive.
+ List all files and folders in a folder.
+ search in Google Drive. get its link
+ Progress bar when downloading and uploading

# Programmming

## Authentication steps.

Have to manually copy the client_secret.json from driveapp to quickstart folder
https://developers.google.com/api-client-library/python/guide/aaa_client_secrets
### SCOPE:

https://developers.google.com/api-client-library/python/start/get_started

>"Authorization information is stored on the file system, so subsequent executions will not prompt for authorization.
Source: https://developers.google.com/drive/api/v3/quickstart/python
"

Get API key.

## Work with files and folders
### MIME type

identifier for file formats and format contents transmitted on the Internet
```
$mime_types= array(
    "xls" =>'application/vnd.ms-excel',
    "xlsx" =>'application/vnd.openxmlformats-officedocument.spreadsheetml.sheet',
    "xml" =>'text/xml',
    "ods"=>'application/vnd.oasis.opendocument.spreadsheet',
    "csv"=>'text/plain',
    "tmpl"=>'text/plain',
    "pdf"=> 'application/pdf',
    "php"=>'application/x-httpd-php',
    "jpg"=>'image/jpeg',
    "png"=>'image/png',
    "gif"=>'image/gif',
    "bmp"=>'image/bmp',
    "txt"=>'text/plain',
    "doc"=>'application/msword',
    "js"=>'text/js',
    "swf"=>'application/x-shockwave-flash',
    "mp3"=>'audio/mpeg',
    "zip"=>'application/zip',
    "rar"=>'application/rar',
    "tar"=>'application/tar',
    "arj"=>'application/arj',
    "cab"=>'application/cab',
    "html"=>'text/html',
    "htm"=>'text/html',
    "default"=>'application/octet-stream',
    "folder"=>'application/vnd.google-apps.folder'
);
```
http://help.encoding.com/knowledge-base/article/correct-mime-types-for-serving-video-files/
https://developers.google.com/drive/api/v3/mime-types
https://stackoverflow.com/questions/11894772/google-drive-mime-types-listing
### Download
https://developers.google.com/drive/api/v3/manage-downloads
### Upload
https://stackoverflow.com/questions/14286402/google-drive-python-api-resumable-upload-error-401-after-2-hours

https://developers.google.com/drive/api/v2/folder

# References:
https://developers.google.com/drive/api/v2/reference/files/
https://developers.google.com/drive/api/v3/reference/
https://github.com/gsuitedevs
https://developers.google.com/drive/api/v3/handle-errors

# Problems
+ only list files and folders based on that token?_ apps?
+ list, query the Google Drive!
## Youtube links:
+ Google Drive API: Uploading & Downloading Files
+ Google Drive API Python Getting Started Upload, Download, Create Files Folder 2018
