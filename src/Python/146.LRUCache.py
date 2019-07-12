
from collections import OrderedDict
class LRUCache(OrderedDict):

    def __init__(self, capacity):
        """
        :type capacity: int
        """
        self.capacity = capacity

    def get(self, key):
        """
        :type key: int
        :rtype: int
        """
        if key not in self:
            return - 1
        
        self.move_to_end(key)
        return self[key]

    def put(self, key, value):
        """
        :type key: int
        :type value: int
        :rtype: void
        """
        if key in self:
            self.move_to_end(key)
        self[key] = value
        if len(self) > self.capacity:
            self.popitem(last = False)


if __name__ == "__main__":
    cache = LRUCache(2)
    cache.put(1, 1)
    cache.put(2, 2)
    cache.get(1)        # 返回  1
    cache.put(3, 3)     # 该操作会使得密钥 2 作废
    cache.get(2)        # 返回 -1 (未找到)
    cache.put(4, 4)     # 该操作会使得密钥 1 作废
    cache.get(1)        # 返回 -1 (未找到)
    cache.get(3)        # 返回  3
    cache.get(4)        # 返回  4

   