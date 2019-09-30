
class Vector2D:
    def __init__(self, vec2d):
        self.listOfList = vec2d
        self.listIndex = 0
        self.elemIndex = 0


    def next(self):
        val = self.listOfList[self.listIndex][self.elemIndex]
        self.elemIndex += 1
        return val


    def hasNext(self):
        while self.listIndex < len(self.listOfList):
            if self.elemIndex < len(self.listOfList[self.listIndex]:
                return True
            else:
                self.listIndex += 1
                self.elemIndex = 0
            return False

    
if __name__ == "__main__":
    solution = Solution()
