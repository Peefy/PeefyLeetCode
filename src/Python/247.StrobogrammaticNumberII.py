
class Solution:
    def buildResult(self, curPos, n, cache, selfarr, diffMap, result):
        if curPos < (n + 1) // 2:
            for c in selfarr:
                if curPos == 0 and c == '0' and n != 1:
                    continue
                cache[curPos] = cache[n - 1 - curPos] = c
                self.buildResult(curPos + 1, n, cache, selfarr, diffMap, result)
            if n % 2 == 0 or curPos != n / 2:
                for c in diffMap.keys():
                    cache[curPos] = c
                    cache[n - 1 - curPos] = diffMap[c]
                    self.buildResult(curPos + 1, n, cache, selfarr, diffMap, result)
            elif n != 0:
                result.append(''.join(cache))


    def findStrobogrammatic(self, n):
        diffMap = {}
        diffMap['6'] = '9'
        diffMap['9'] = '6'
        selfarr = ['0', '1', '8']
        result = []
        cache = ['0'] * n
        self.buildResult(0, n, cache, selfarr, diffMap, result)

    
if __name__ == "__main__":
    solution = Solution()
