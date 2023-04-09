import string
import random


def generaterandomstring(length:int()):
    letters = string.ascii_letters
    attempt = "".join([random.choice(letters) for i in range(length)])
    print(attempt) 

generaterandomstring(7)

#echo 'string' | ./password