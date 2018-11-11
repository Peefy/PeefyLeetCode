
class Node:
    def __init__(self, val, isLeaf, topLeft, topRight, bottomLeft, bottomRight):
        self.val = val
        self.isLeaf = isLeaf
        self.topLeft = topLeft
        self.topRight = topRight
        self.bottomLeft = bottomLeft
        self.bottomRight = bottomRight

class Solution:
    def intersect(self, quadTree1, quadTree2):
        """
        :type quadTree1: Node
        :type quadTree2: Node
        :rtype: Node
        """
        if quadTree1.isLeaf and quadTree1.val: 
            return quadTree1
        if quadTree2.isLeaf and quadTree2.val: 
            return quadTree2
        if quadTree1.isLeaf and not quadTree1.val: 
            return quadTree2
        if quadTree2.isLeaf and not quadTree2.val: 
            return quadTree1
        tl = self.intersect(quadTree1.topLeft, quadTree2.topLeft)
        tr = self.intersect(quadTree1.topRight, quadTree2.topRight)
        bl = self.intersect(quadTree1.bottomLeft, quadTree2.bottomLeft)
        br = self.intersect(quadTree1.bottomRight, quadTree2.bottomRight)
        if tl.val == tr.val and tl.val == bl.val and tl.val == br.val and tl.isLeaf and tr.isLeaf and bl.isLeaf and br.isLeaf:
            return Node(tl.val, True, None, None, None, None);    
        return Node(False, False, tl, tr, bl, br)

if __name__ == '__main__':
    solution = Solution()

    tree1 = Node(True, False, None, None, None, None)
    tree1.topLeft = Node(True, True, None, None, None, None)
    tree1.topRight = Node(True, True, None, None, None, None)
    tree1.bottomLeft = Node(False, True, None, None, None, None)
    tree1.bottomRight = Node(False, True, None, None, None, None)

    tree2 = Node(True, False, None, None, None, None)
    tree2.topLeft = Node(True, True, None, None, None, None)
    tree2.topRight = Node(True, False, None, None, None, None)
    tree2.bottomLeft = Node(False, True, None, None, None, None)
    tree2.bottomRight = Node(False, True, None, None, None, None)
    tree2.topRight.topLeft = Node(False, True, None, None, None, None)
    tree2.topRight.topRight = Node(False, True, None, None, None, None)
    tree2.topRight.bottomLeft = Node(True, True, None, None, None, None)
    tree2.topRight.bottomRight = Node(True, True, None, None, None, None)

    print(solution.intersect(tree1, tree2))
    print('')
else:
    pass

