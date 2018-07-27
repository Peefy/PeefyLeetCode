
class MinStack:
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.arr = []
        self.min = 214748364

    def push(self, x):
        """
        :type x: int
        :rtype: void
        """
        if x <= self.min:
            self.arr.append(self.min)
            self.min = x     
        self.arr.append(x)
        
    def pop(self):
        """
        :rtype: void
        """
        element = self.arr.pop()
        if element == self.min:
            self.min = self.arr.pop()
               
    def top(self):
        """
        :rtype: int
        """
        return self.arr[-1]

    def getMin(self):
        """
        :rtype: int
        """
        return self.min

if __name__ == '__main__':
    stack = MinStack()
    stack.push(-2)
    stack.push(0)
    stack.push(-3)
    print(stack.getMin())
    stack.pop()
    stack.top()
    print(stack.getMin())
else:
    pass
