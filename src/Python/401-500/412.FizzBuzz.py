
class Solution:
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        r = []
        for i in range(1, n + 1):
            s = ''
            if i % 3 == 0:
                s = 'Fizz' 
            if i % 5 == 0:
                s += 'Buzz'
            r.append(str(i) if s == '' else s)
        return r
   
if __name__ == '__main__':
    solution = Solution()
    print(solution.fizzBuzz(15))
else:
    pass
