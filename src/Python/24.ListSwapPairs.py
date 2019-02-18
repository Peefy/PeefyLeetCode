class Solution:
    def generateParenthesis(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        res = []
        def recursive(n, count1, count2, res, ans):
            if count1 > n or count2 > n: 
                return
            if count1 == n and count2 == n:  
                res.append(ans)
            if count1 >= count2:
                ans1 = ans
                recursive(n, count1+1, count2, res, ans+"(")
                recursive(n, count1, count2+1, res, ans1+")")
        recursive(n, 0, 0, res, "")
        return res
            

if __name__ == "__main__":
    solution = Solution()
    print(solution.generateParenthesis(3))
