
from collections import Counter

class Solution:
    def generatePalindromes(self, s):
        h = Counter(s)
        center = '\0'
        ans = []
        for (k, v) in h.items():
            if v % 2 == 1:
                if center != '\0':
                    return ans
                center = k
        cur = ''
        if center != '\0':
            h[center] -= 1
            if h[center] == 0:
                h.pop(center)
            cur = cur + center
        self.permute(cur, h, ans)
        return ans


    def permute(self, cur, h, ans):
        if len(h) == 0:
            ans.append(cur[:])
            return
        for (k, v) in h.items():
            n = k + cur + k
            h[k] -= 2
            if h[k] == 0:
                h.pop(k)
            self.permute(n, h, ans)
            if k not in h:
                h[k] = 2
            else:
                h[k] += 2

    
if __name__ == "__main__":
    solution = Solution()
    print(solution.generatePalindromes('aabb'))
    print(solution.generatePalindromes('aabbc'))
    print(solution.generatePalindromes('aabbcc'))
    print(solution.generatePalindromes('abc'))

