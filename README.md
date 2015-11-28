# panicbutton

This is a readme!

##API

####URL: http://ludobotsapp.com


### 1. (POST) /PBCreateAccount.php
*Headers
	* `Content-Type :: x-www-form-urlencoded`
*Payload -- Plaintext

*Example payload (Body)
```
uid=johndoe123&pass=johndoeiscool&firstName=John&lastName=Doe&email=JDoeiscool123@foo.bar
```

*JSON Response 

```json
{"meta":{"pass_verification":true,"user":"BLQUINN","fName":"Benjamin","lName":"Quinn","email":"blquinn@uvm.edu"},
"data":[{"type":"email","phone":"null","email":"blquinn@uvm.edu"} ,{"type":"text","phone":"9147087588","email":"null"},{"type":"text","phone":"9145550005","email":"null"}],"error":[]}
```

### 2. (POST) /PBUpdateActions.php

*Headers
	* `Content-Type :: application/json`
*Payload -- JSON document
	*JSON file

*Example payload
	*Requires the additional "pass" field to be added to the JSON document in the app
	*used for verifying pass before deleting action tuples and rewriting them

```json
{"meta":{"pass_verification":true,"user":"BLQUINN","fName":"Benjamin","lName":"Quinn","email":"blquinn@uvm.edu"},
"data":[{"type":"email","phone":"null","email":"blquinn@uvm.edu"} ,{"type":"text","phone":"9147087588","email":"null"},{"type":"text","phone":"9145550005","email":"null"}],"error":[],"pass":"password"}
  ```


### 3. (POST) /PBSignIn.php

*Headers
	* `Content-Type :: x-www-form-urlencoded`
*Payload -- plaintext

*Example payload (Body)

```
uid=johndoe&pass=johndoeiscool
```

*Returns JSON in body

```json
{"meta":{...},"data":[{},{},{}...],"error":[...]}
```
*data contains array of action objects
*this is the exact json that will be stored in the app, for local use
