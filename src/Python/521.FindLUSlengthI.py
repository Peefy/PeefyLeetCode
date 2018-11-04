
class Solution:
    def findLUSlength(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: int
        """
        return -1 if a == b else max(len(a), len(b))
            
if __name__ == '__main__':
    solution = Solution()
    print(solution.findLUSlength('aaa', 'aaa'))
    print(solution.findLUSlength('aba', 'cdc'))
    print(solution.findLUSlength('abc', 'ddc'))
    print(solution.findLUSlength('abc', 'abcd'))
else:
    pass
