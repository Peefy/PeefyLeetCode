
class Solution:
    def encode(self, strs):
        sb = []
        for s in strs:
            for c in s:
                if c == ',':
                    sb.append(',!')
                elif c == '!':
                    sb.append('!!')
                else:
                    sb.append(c)
            sb.append(',')
        return ''.join(sb)


    def decode(self, s):
        ans = []
        sb = []
        i = 0
        while i < len(s):
            c = s[i]
            if c == ',':
                cursor = i + 1
                while cursor < len(s) and s[cursor] == '!':
                    cursor += 1
                if (cursor - i) % 2 == 1:
                    ans.append(''.join(sb))
                    sb.clear()
                else:
                    sb.append(',')
                    i += 1
                for j in range(i + 1, cursor, 2):
                    sb.append('!')
                i = cursor - i
            elif c == '!':
                sb.append('!')
                i += 1
            else:
                sb.append(c)
            i += 1
        return ans


if __name__ == "__main__":
    solution = Solution()

