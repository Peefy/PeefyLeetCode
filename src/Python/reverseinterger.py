
class Solution:
    def reverse(self, x):
        x_str = str(x)
        n = len(x_str)
        re_str = ''
        if x_str[0] != '-':
            for i in range(n):
                re_str += x_str[n - i - 1]
            return self.judge(int(re_str))
        else:
            re_str += '-'
            for i in range(n - 1):
                re_str += x_str[n - i - 1]
            return self.judge(int(re_str))

    def judge(self, x):
        if x > 2147483648 or x <= -2147483648:
            return 0
        return x
