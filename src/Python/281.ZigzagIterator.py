
class ZigzagIerator:

    def __init__(self, v1, v2):
        self.vectors = [v1, v2]
        self.row = 0
        self.col = 0
        self.max = max(len(v1), len(v2))

    def next(self): 
        self.hasNext()
        val = self.vectors[self.row][self.col]
        self.row += 1
        return val

    def hasNext(self): 
        while self.col < self.max:
            while self.row < len(self.vectors):
                if self.col < len(self.vectors[self.row]):
                    return True
                self.row += 1
            self.row = 0
            self.col += 1
        return False


if __name__ == "__main__":
    solution = ZigzagIerator([], [])
