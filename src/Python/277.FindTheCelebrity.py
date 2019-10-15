
class Solution:
    def knows(self, candidate1, candidate2):
        pass


    def findCelebrity(self, n):
        candidate = 0
        for i in range(1, n):
            if self.knows(candidate, i) == True:
                candidate = i
        for i in range(0, n):
            if i == candidate:
                continue
            if self.knows(i, candidate) == False or self.knows(candidate, i)
                return -1
        return candidate
        
        
if __name__ == "__main__":
    solution = Solution()

