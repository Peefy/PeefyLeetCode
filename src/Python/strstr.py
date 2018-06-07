
class Solution:
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        if len(needle) == "":
            return 0
        hl = len(haystack)
        nl = len(needle)
        i = 0
        j = 0
        while i < hl:
            if j == nl:
                return i - j
            if haystack[i] == needle[j]:
                i += 1
                j += 1
            else:
                i = i - j + 1
                j = 0
        if i == hl and j == nl:
            return i - j
        return -1

