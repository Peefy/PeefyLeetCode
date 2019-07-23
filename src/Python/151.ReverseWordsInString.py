
class Solution:
    def reverseWords(self, set):
        return ' '.join(set.split()[::-1])


if __name__ == "__main__":
    solution = Solution()
    print(solution.reverseWords("the sky is blue"))
    print(solution.reverseWords("  hello world!  "))
