import requests 
import json
from secretToken import token  #This is bringing in the token saved in other file. This token is generated from github -> account ->
                                    # settings -> Developer settings -> Personal access tokens 

apiUrl = "https://api.github.com"
header = {
    "Authorization" : "token " + token,
    "Accept" : "application/vnd.github+json"
}
repo = "test"
isPrivate = False

if(isPrivate):
    payload = '{"name": "' + repo + '", "private" : true }'
else:
    payload = '{"name": "' + repo + '", "private" : false }'


r = requests.post(apiUrl+"/user/repos", data=payload, headers= header)




