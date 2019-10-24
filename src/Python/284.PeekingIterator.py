

class Iterator:
    def __init__(self, nums):
        """
        Initializes an iterator object to the beginning of a list.
        :type nums: List[int]
        """
        pass


    def hasNext(self):
        """
        Returns true if the iteration has more elements.
        :rtype: bool
        """
        pass


    def next(self):
        """
        Returns the next element in the iteration.
        :rtype: int
        """
        pass


class PeekingIterator:
    def __init__(self, iterator):
        """
        Initialize your data structure here.
        :type iterator: Iterator
        """
        self.cur = 0
        self.res = []
        while iterator.hasNext():
            self.res.append(iterator.next())
        

    def peek(self):
        """
        Returns the next element in the iteration without advancing the iterator.
        :rtype: int
        """
        if len(self.res) == 0 or self.cur >= len(self.res):
            return -100000
        return self.res[self.cur]
        

    def next(self):
        """
        :rtype: int
        """
        re = -100000
        if self.cur < len(self.res):
            re = self.res[self.cur]
            self.cur += 1
        return re
        

    def hasNext(self):
        """
        :rtype: bool
        """
        re = False
        if self.cur < len(self.res):
            re = True
        return re


if __name__ == "__main__":
    nums = [1, 2, 3]
    iter = PeekingIterator(Iterator(nums))
    while iter.hasNext():
        val = iter.peek()
        iter.next()
