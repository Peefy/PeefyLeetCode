
class Solution:
    def isOneEditDistance(self, s, t):
        if s is None and t is None:
            return False
        if s is None:
            return len(t) - 1
        if t is None:
            return len(s) - 1
        if len(s) < len(t):
            s, t = t, s
        if len(s) == 1 and len(t) == 0:
            return True
        if len(s) > len(t) + 1:
            return False
        if len(s) == len(t):
            dist = 0
            for i in range(0, len(s)):
                if s[i] != t[t]:
                    dist += 1
                    if dist > 1:
                        return False
        else:
            dist = 0 
            for i in range(0, len(t)):
                if t[i] == s[i + dist]:
                    continue
                dist += 1
                if dist > 1:
                    return False
                if t[i] == s[i + dist]:
                    continue
                return dist <= 1
        


if __name__ == "__main__":
    solution = Solution()
    print(solution.isOneEditDistance("ss", "sst"))
