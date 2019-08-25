
class Solution:
    def reverseWords(self, s):
        return ' '.join(s.split()[::-1])


if __name__ == "__main__":
    solution = Solution()
    print(solution.reverseWords("the sky is blue"))

