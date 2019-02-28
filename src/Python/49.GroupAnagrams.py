
class Solution:
    def groupAnagrams(self, strs):
        ans = []
        h = {}
        count = 0
        for s in strs:
            hvalue = 0
            sl = list(s)
            sl.sort()
            ss = "".join(sl)
            hvalue = hash(ss)
            if hvalue not in h.keys():
                h[hvalue] = count
                count += 1
                ans.append([s])
            else:
                ans[h[hvalue]].append(s)
        return ans


if __name__ == "__main__":
    solution = Solution()
    print(solution.groupAnagrams(["eat", "tea", "tan", "ate", "nat", "bat"]))

   