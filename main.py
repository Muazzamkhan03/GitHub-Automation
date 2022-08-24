from ast import arg, arguments
import requests 
import argparse
from secretToken import token  #This is bringing in the token saved in other file. This token is generated from github -> account ->
                                    # settings -> Developer settings -> Personal access tokens 

apiUrl = "https://api.github.com"
header = {
    "Authorization" : "token " + token,
    "Accept" : "application/vnd.github+json"
}
repo = "test"
isPrivate = False

parser = argparse.ArgumentParser()
parser.add_argument("--name","-n",type=str, dest="name")
parser.add_argument("--private", "-p", dest="is_private")

arguments = parser.parse_args()
repo = arguments.name
isPrivate = arguments.is_private

if(isPrivate):
    payload = '{"name": "' + repo + '", "private" : true }'
else:
    payload = '{"name": "' + repo + '", "private" : false }'


r = requests.post(apiUrl+"/user/repos", data=payload, headers= header)




