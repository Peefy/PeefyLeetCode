

class Solution:
    def __init__(self):
        self.abbrs = dict()
        abbrs = self.abbrs
        for word in dictionary:
            abbr = self.abbr(word)
            if abbr not in abbrs:
                abbrs[abbr] = {}
            else:
                abbrs[abbr].insert(word);

    def abbr(self, word):
        if (len(word) <= 2)
            return word
        return str(word[0]) + str(len(word) - 2) + str(word[-1])

    def isUnique(self, word):
        abbrs = self.abbrs
        if self.abbr(word) in abbrs:
            return True;
        words = abbrs[self.abbr(word)]
        if len(words) == 0:
            return True
        if len(words) == 1 and word in words:
            return True
        return False

   
if __name__ == '__main__':
    solution = Solution()

