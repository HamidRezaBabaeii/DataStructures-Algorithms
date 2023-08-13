class Stack :

    def __init__(self , size):
        self._size = size
        self.array = [None] * size
        self.index = 0

    # This method adds new value the top of the stack
    def push (self , value):
        if self.index == self.size:
            return "stack is full"
        
        self.array[self.index] = value
        self.index += 1 
        
    # This method removes the top value of the stack
    def pop (self):
        if self.index == 0:
            return "stack is empty"

        self.index -= 1

    # This method returns the top value of the stack
    def top (self):
        return self.array[self.index - 1]
    

    # This method returns size of the stack 
    def size (self):
        return print("\tsize of the stack : "+ str(self.index))
    
    # This method finds minimum value in the stack
    def min (self):
        mini = self.array[0]
        for i in range(0,self.index):
            if mini > self.array[i]:
                mini = self.array[i]
        return mini


    # This method is private and for find element that will be pop
    def find_IndexOf_Element(self , value):
        elementFound = False
        for i in range(0,self.index):
            if(self.array[i]==value):
                elementFound = True
                return print("\tindex of " + str(value) + " : " + str(i))
            
        if elementFound == False:    
            return print("The Element not found.")

###--------###--------###--------###--------###--------###--------###--------###--------###--------###

stack = Stack(15) 

stack.find_IndexOf_Element(11)
while (True):
    todos = """
    --------- Commands! ---------
    1 - push
    2 - pop
    3 - top
    4 - size
    5 - min
    6 - inex of element
    7 - exit
    --------- Commands! ---------
    """
    command = int(input(todos))

    if  command == 1:
        value = int(input("\tEnter value :"))
        stack.push(value)
        print ("\t--------------------------")

    elif command == 2:
        stack.pop()
        print ("\t--------------------------")

    elif command == 3:
        value = stack.top()
        print ("\tThe value :" , value)
        print ("\t--------------------------")

    elif command == 4:
        stack.size()
        print ("\t--------------------------")

    elif command == 5:
        value = stack.min()
        print ("\tminimum :" , value)
        print ("\t--------------------------")

    elif command == 6:
        value = int(input("\tEnter value :"))
        stack.find_IndexOf_Element(value)
        print ("\t--------------------------")

    elif command == 7:
        break
