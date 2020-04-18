
class Solution:
    def canWin(self, s):
        for i in range(len(s) - 1): 
            if s[i:i+2] == "++":
                current = s[0:i] + "--" + s[i+2:] 
                if not self.canWin(current): 
                    return True 
        return False 
        

if __name__ == '__main__':
    solution = Solution()

