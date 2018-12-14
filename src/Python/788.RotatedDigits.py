
class Solution:
    def letterCasePermutation(self, S): 
        ret = []
        self.bktrace(S, ret, [], 0)
        return ret
    
    def bktrace(self, s, ret, sb, i): 
        if i == len(s):
            ret.append(''.join(sb))
            return
        c = s[i]
        if (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z'):
            sb.append(c.lower())
            self.bktrace(s, ret, sb, i + 1)
            sb.pop(len(sb) - 1)
            
            sb.append(c.upper())
            self.bktrace(s, ret, sb, i + 1)
            sb.pop(len(sb) - 1)
        else:
            sb.append(c)
            self.bktrace(s, ret, sb, i + 1)
            sb.pop(len(sb) - 1)


if __name__ == '__main__':
    solution = Solution()
    print(solution.letterCasePermutation("a1b2"))
    print(solution.letterCasePermutation("3z4"))
else:
    pass

