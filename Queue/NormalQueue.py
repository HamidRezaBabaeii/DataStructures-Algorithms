class Queue:

    def __init__(self , size):
        self._size = size
        self.array = [None] * size
        self._pointerFront = -1
        self._pointerRear = 0

    def enqueue(self , value):
        self._pointerFront += 1

        if(self._pointerFront!=self._size):
            self.array[self._pointerFront] = value
        else:
            return "Queue doesn't have room"
        

    def dequeue(self):
        if(self.array[self._pointerRear]== None):
            print("\tThe Queue Is Empty.")

        if(self._pointerRear>=0 and self._pointerRear<self._size and self._pointerFront!=-1):
            self._pointerRear += 1


    def showFirstElemnt(self):
        print("\t",self.array[self._pointerRear])


    def showLatestElement(self):
        print("\t",self.array[self._pointerFront])


queue = Queue(10)
while(True):
    todos = ("""
        1 - Enqueue 
        2 - Dequeue
        3 - First Element
        4 - Latest Element
        5 - Exit
    """)
    command = int(input(todos+"\n\t"))

    if(command == 1):
        value = int(input("\tEnter value\n\t"))
        queue.enqueue(value)
    elif(command == 2):
        queue.dequeue()
    elif(command == 3):
        queue.showFirstElemnt()
    elif(command == 4):
        queue.showLatestElement()
    elif(command == 5):
        print("\tGoodBye Baby! :)")
        break
    else :
        print("Please Enter Number From Numbers Above.")


