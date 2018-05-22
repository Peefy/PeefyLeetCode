class Solution:
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """ 
        if x < 0:
            return False
        bit = []
        pre = x
        while x > 0:
            cur = x % 10
            bit.append(cur)
            x = x // 10
        sum = 0
        for b in bit:
            sum = sum * 10 + b 
        if sum == pre:
            return True
        return False
            
