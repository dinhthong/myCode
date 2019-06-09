# Copyright 2018 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# [START admin_sdk_reseller_quickstart]
"""
Shows basic usage of the Admin SDK Reports API. Outputs a list of last 10 login
events.
"""
from __future__ import print_function
from apiclient.discovery import build, http
from httplib2 import Http
from oauth2client import file, client, tools
import StringIO
import random

import apiclient
from email import Utils
from email import MIMEText

# Setup the Admin SDK Reports API
SCOPES = 'https://www.googleapis.com/auth/admin.reports.audit.readonly'
store = file.Storage('credentials.json')
creds = store.get()
if not creds or creds.invalid:
    flow = client.flow_from_clientsecrets('client_secret.json', SCOPES)
    creds = tools.run_flow(flow, store)
service = build('admin', 'reports_v1', http=creds.authorize(Http()))

print('Getting the last 10 login events')
results = service.activities().list(userKey='all', applicationName='login',
    maxResults=10).execute()
activities = results.get('items', [])

if not activities:
    print('No logins found.')
else:
    print('Logins:')
    for activity in activities:
        print('{0}: {1} ({2})'.format(activity['id']['time'],
            activity['actor']['email'], activity['events'][0]['name']))
# [END admin_sdk_reseller_quickstart]
