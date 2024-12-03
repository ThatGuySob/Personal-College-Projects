from firebase import firebase
import time
import serial

FBConn = firebase.FirebaseApplication('https://microbitnoisereader-default-rtdb.firebaseio.com/', None)

ser = serial.Serial()
ser.baudrate = 115200
ser.port = "COM5"
ser.open()

mostrecentKeyID = 0
mostrecentTimestamp = 0

while True:
    
    myGetResults = FBConn.get('MyNoise/', None)
    
    for keyID in myGetResults:
        if myGetResults[keyID]['Timestamp'] > mostrecentTimestamp:
            mostrecentTimestamp = int(myGetResults[keyID]['Timestamp'])
            mostrecentKeyID = myGetResults[keyID]
    
        
    microbitdata = str(myGetResults[keyID]['db'])           

    print (microbitdata)
    
    ser.write(microbitdata.encode('UTF-8') + b"\n")
       
    time.sleep(5)

ser.close()

