
class Solution:
    
    def __init__(self):
        self.ans = 0

    def dfs(self, root, pre):
        if root is None:
            return True
        flag1 = self.dfs(root.left, root.val)
        flag2 = self.dfs(root.right, root.val)
        if flag1 == True and flag2 == True:
            ans += 1
        return root.val == pre and flag1 and flag2


    def countUnivalSubtrees(self, root):
        if root is None:
            return 0
        self.ans = 0
        self.dfs(root, root.val)
        return self.ans

    
if __name__ == "__main__":
    solution = Solution()
