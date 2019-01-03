
class RecentCounter:

    def __init__(self):
        self.queue = []

    def ping(self, t):
        """
        :type t: int
        :rtype: int
        """
        self.queue.append(t)
        while t - self.queue[0] > 3000:
            self.queue.pop(0)
        return len(self.queue)

if __name__ == '__main__':
    obj = RecentCounter()
    print(obj.ping(1))
    print(obj.ping(100))
    print(obj.ping(3001))
    print(obj.ping(3002))
    print(obj.ping(6000))
else:
    pass
