
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def buildTree(self, pre: List[int], infix: List[int]) -> TreeNode:
        n = len(pre)
        if n == 0:
            return []
        idx = {val:i for i,val in enumerate(infix)}
        st = []
        cur = root = TreeNode(pre[0])
        for i in range(1,n):
            st.append(cur)
            val = pre[i]
            if idx[val] < idx[cur.val]:
                cur.left = TreeNode(val)
                cur = cur.left
            else:
                while st and idx[val] > idx[st[-1].val]:
                    cur = st.pop()
                cur.right = TreeNode(val)
                cur = cur.right
        return root


if __name__ == "__main__":
    solution = Solution()
    print(solution.buildTree([3,9,20,15,7], [9,3,15,20,7]))
   