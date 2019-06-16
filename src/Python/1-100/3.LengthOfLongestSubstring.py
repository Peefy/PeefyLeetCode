
class Solution:
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        if len(s) == 0:
            return 0
        s += s[-1]
        count = 0
        fisrtpoint = 0
        h = set()
        for i, c in enumerate(s):
            if c not in h:
                h.add(c)
            else:    
                count = max(count, len(h))
                while s[fisrtpoint] != c:
                    h.remove(s[fisrtpoint])
                    fisrtpoint += 1         
                fisrtpoint += 1     
        return count


if __name__ == "__main__":
    solution = Solution()
    print(solution.lengthOfLongestSubstring("abcabcbb"))
    print(solution.lengthOfLongestSubstring("bbbbb"))
    print(solution.lengthOfLongestSubstring("pwwkew"))
    print(solution.lengthOfLongestSubstring(" "))
    print(solution.lengthOfLongestSubstring("c"))
    print(solution.lengthOfLongestSubstring("dvdf"))
