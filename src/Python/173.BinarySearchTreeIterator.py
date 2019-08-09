
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None

class BSTIterator:

    stack = []

    def __init__(self, root: TreeNode):
        if root is None:
            return
        self.stack.append(root)
        while root.left is not None:
            self.stack.append(root.left)
            root = root.left


    def next(self) -> int:
        """
        @return the next smallest number
        """
        node = self.stack.pop()
        if node.right is not None:
            self.stack.append(node.right)
            t = node.right
            while t.left is not None:
                self.stack.append(t.left)
                t = t.left
        return node.val


    def hasNext(self) -> bool:
        """
        @return whether we have a next smallest number
        """
        return len(self.stack) != 0


if __name__ == "__main__":
    obj = BSTIterator(root)
    param_1 = obj.next()
    param_2 = obj.hasNext()
