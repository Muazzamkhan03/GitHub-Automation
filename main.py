import requests 
import json
from secretToken import token 

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




