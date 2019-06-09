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

# [START vault_quickstart]
"""
Shows basic usage of the Vault API. Outputs the names and IDs of the first
10 matters in Vault.
"""
from __future__ import print_function
from apiclient.discovery import build
from httplib2 import Http
from oauth2client import file, client, tools

# Setup the Vault API
SCOPES = 'https://www.googleapis.com/auth/ediscovery'
store = file.Storage('credentials.json')
creds = store.get()
if not creds or creds.invalid:
    flow = client.flow_from_clientsecrets('client_secret.json', SCOPES)
    creds = tools.run_flow(flow, store)
service = build('vault', 'v1', http=creds.authorize(Http()))

# Call the Vault API
results = service.matters().list(pageSize=10).execute()
matters = results.get('matters', [])

if not matters:
    print('No matters found.')
else:
    print('Matters:')
    for matter in matters:
        print('{} ({})'.format(matter.get('name'), matter.get('id')))
# [END vault_quickstart]
