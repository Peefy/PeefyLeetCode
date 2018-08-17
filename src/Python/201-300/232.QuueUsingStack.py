
class MyQueue:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.stack1 = []
        self.stack2 = []

    def push(self, x):
        """
        Push element x to the back of queue.
        :type x: int
        :rtype: void
        """
        self.stack1.append(x)

    def pop(self):
        """
        Removes the element from in front of queue and returns that element.
        :rtype: int
        """
        for i in range(len(self.stack1) - 1):
            self.stack2.append(self.stack1.pop())
        x = self.stack1.pop()
        for i in range(len(self.stack2)):
            self.stack1.append(self.stack2.pop())
        return x

    def peek(self):
        """
        Get the front element.
        :rtype: int
        """
        return self.stack1[0]

    def empty(self):
        """
        Returns whether the queue is empty.
        :rtype: bool
        """
        return len(self.stack1) == 0