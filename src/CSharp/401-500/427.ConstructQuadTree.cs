
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ConstructQuadTree {
    public class Node {
    public bool val;
    public bool isLeaf;
    public Node topLeft;
    public Node topRight;
    public Node bottomLeft;
    public Node bottomRight;

    public Node(){}
    public Node(bool _val,bool _isLeaf,Node _topLeft,Node _topRight,Node _bottomLeft,Node _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
}
public class ExtendNode : Node{
    public bool isRand;
    public ExtendNode(bool _isRand){
        isRand = _isRand;
    }
}
public class Solution {
        public ExtendNode constructNode(int[][] grid, int left, int top, int width){
        if (width == 1) {
            var exnode = new ExtendNode(false);
            exnode.val = grid[top][left] == 1;
            exnode.isLeaf = true;
            return exnode;
        }
        int half_width = width / 2;
        ExtendNode topleft = constructNode(grid, left, top, half_width);
        ExtendNode topright = constructNode(grid, left + half_width, top, half_width);
        ExtendNode bottomleft = constructNode(grid, left, top + half_width, half_width);
        ExtendNode bottomright = constructNode(grid, left + half_width, top + half_width, half_width);
        ExtendNode node = new ExtendNode(false);
        if (topleft.val == true && topright.val == true && bottomleft.val == true && bottomright.val == true 
            && topleft.isRand == false && topright.isRand == false && bottomleft.isRand == false && bottomright.isRand == false){
            node.val = true;
            node.isLeaf = true;
            return node;
        }
        if (topleft.val == false && topright.val == false && bottomleft.val == false && bottomright.val == false){
            node.val = false;
            node.isLeaf = true;
            return node;
        }
        node.isRand = true;
        node.val = true;
        node.topLeft = topleft;
        node.topRight = topright;
        node.bottomLeft = bottomleft;
        node.bottomRight = bottomright;
        node.isLeaf = false;
        return node;
    }
    public Node Construct(int[][] grid) {
        return constructNode(grid, 0, 0, grid.Length);
    }
}
}

