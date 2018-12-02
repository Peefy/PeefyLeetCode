class MyHashSet:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.bucket = [0] * 1000000

    def add(self, key):
        """
        :type key: int
        :rtype: void
        """
        self.bucket[key - 1] = 1

    def remove(self, key):
        """
        :type key: int
        :rtype: void
        """
        self.bucket[key - 1] = 0

    def contains(self, key):
        """
        Returns true if this set contains the specified element
        :type key: int
        :rtype: bool
        """
        return self.bucket[key - 1] == 1

        