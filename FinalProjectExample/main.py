import random
from datetime import datetime
random.seed(datetime.now())
print(random.randrange(1, 10))
print(random.randrange(1, 10))

def function():
    print("hello world")

function()

idea = True
book = {
    "math": 12.75,
    "grammar": "comma",
    "history": 1812,
    "science": True
}
floating = 2.33
counter = 3
collection = {"reading", 40, 4,5}
statement = "greetings"
print("idea is "+str(type(idea)))
print("book is "+str(type(book)))
print("floating is "+str(type(floating)))
print("counter is "+str(type(counter)))
print("collection is "+str(type(collection)))
print("statement "+str(type(statement)))

class Object:
    def __init__(self):
        self.detail1 = "fancy"
        self.detail2 = "smart"
    def talk(self):
        print("This object is "+self.detail1+" and "+self.detail2)

object = Object()
object.talk()
