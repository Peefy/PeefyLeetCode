
class Solution:
    def compress(self, chars):
        """
        :type chars: List[str]
        :rtype: int
        """
        n = len(chars)
        k = 1
        count = 1
        for i in range(1, n):
            char = chars[i]
            char_before = chars[i - 1]
            if char != char_before:
                if count != 1:
                    countstr = str(count)
                    for j in range(len(countstr)):
                        chars[k] = countstr[j]
                        k += 1
                count = 1
                chars[k] = char
                k += 1
            else:
                count += 1
        if count != 1:
            countstr = str(count)
            for j in range(len(countstr)):
                chars[k] = countstr[j]
                k += 1
        return k

if __name__ == '__main__':
    solution = Solution()
    print(solution.compress(['a', 'a', 'b', 'b', 'b', 'c', 'c']))
    print(solution.compress(["a","b","b","b","b","b","b","b","b","b","b","b","b"]))
else:
    pass
