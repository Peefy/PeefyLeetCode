import functools

def cmp(a, b):
    return 1 if a + b < b + a else -1

class Solution:
    def largestNumber(self, nums):
        numsstr = list(map(str, nums))
        numsstr.sort(key=functools.cmp_to_key(cmp))
        if numsstr[0] == '0':
            return '0'
        return ''.join(numsstr)


if __name__ == "__main__":
    solution = Solution()
    print("102" < "210")
    print(solution.largestNumber([0, 0]))
    print(solution.largestNumber([10, 2]))
    print(solution.largestNumber([3, 30, 34, 5, 9]))

