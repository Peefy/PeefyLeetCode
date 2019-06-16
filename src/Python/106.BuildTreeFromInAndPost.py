
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def buildTree(self, infix, pre) -> TreeNode:
        n = len(pre)
        if n == 0:
            return []
        idx = {val:i for i,val in enumerate(infix)}
        st = []
        cur = root = TreeNode(pre[-1])
        for i in range(-2, -(n + 1), -1):
            st.append(cur)
            val = pre[i]
            if idx[val] > idx[cur.val]:
                cur.right = TreeNode(val)
                cur = cur.right
            else:
                while st and idx[val] < idx[st[-1].val]:
                    cur = st.pop()
                cur.left = TreeNode(val)
                cur = cur.left
        return root


if __name__ == "__main__":
    solution = Solution()
    print(solution.buildTree([9,3,15,20,7], [9,15,7,20,3]))
   