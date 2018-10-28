
class Solution:
    def licenseKeyFormatting(self, S, K):
        """
        :type S: str
        :type K: int
        :rtype: str
        """
        r_list = []
        n = len(S)
        count = 0
        orda = ord('a')
        ordz = ord('z')
        ordA = ord('A')
        for i in range(-1, -(n + 1), -1):
            if S[i] == '-':
                continue
            if ord(S[i]) >= orda and ord(S[i]) <= ordz:
                r_list.append(chr(ord(S[i]) - orda + ordA))
            else:
                r_list.append(S[i])
            count += 1
            if count % K == 0:
                r_list.append('-')
        if len(r_list) > 0 and r_list[-1] == '-':
            r_list.pop()
        return ''.join(r_list[::-1])

if __name__ == '__main__':
    solution = Solution()
    print(solution.licenseKeyFormatting("5F3Z-2e-9-w", 4))
    print(solution.licenseKeyFormatting("2-5g-3-J", 2))
else:
    pass
