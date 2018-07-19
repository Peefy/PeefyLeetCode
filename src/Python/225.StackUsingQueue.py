
class MyStack:
    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.__queue1 = []
        self.__queue2 = []
        self.__count = 0

    def push(self, x):
        """
        Push element x onto stack.
        :type x: int
        :rtype: void
        """
        self.__queue1.append(x)
        self.__count += 1

    def pop(self):
        """
        Removes the element on top of the stack and returns that element.
        :rtype: int
        """
        for i in range(self.__count - 1):
            self.__queue2.append(self.__queue1.pop(0))
        x = self.__queue1.pop(0)
        for i in range(len(self.__queue2)):
            self.__queue1.append(self.__queue2.pop(0))
        self.__count -= 1
        return x

    def top(self):
        """
        Get the top element.
        :rtype: int
        """
        return self.__queue1[self.__count - 1]

    def empty(self):
        """
        Returns whether the stack is empty.
        :rtype: bool
        """
        return self.__count == 0

if __name__ == '__main__':
    obj = MyStack()
    print(obj.push(2))
    print(obj.top())
    print(obj.pop())
    print(obj.empty())
else:
    pass
