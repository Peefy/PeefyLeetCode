
class Solution:
    def groupStrings(self, strings):
        ans = []
        m = {}
        for s in strings:
            t = ''
            for cc in s:
                t += str((ord(cc) - ord(s[0]) + 26) % 26) + ','
            if t not in m:
                m[t] = []
                m[t].append(s)
            else:
                m[t].append(s)

        for kv in m.values():
            ans.append(kv[:])
        return ans

    
if __name__ == "__main__":
    solution = Solution()
