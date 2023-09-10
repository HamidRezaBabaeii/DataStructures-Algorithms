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
        if(self._pointerRear>=0 and self._pointerRear<self._size and self._pointerFront!=-1):
            self._pointerRear += 1


    def showFirstElemnt(self):
        print(self.array[self._pointerRear])


queue = Queue(10)

queue.enqueue(5)
queue.showFirstElemnt()
queue.dequeue()
queue.showFirstElemnt()

