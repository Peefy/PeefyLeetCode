using System;
using System.Collections.Generic;

namespace PeefyLeetCode.QuadTreeIntersection
{

// Definition for a QuadTree node.
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

public class Solution {
    public Node Intersect(Node quadTree1, Node quadTree2) {
        if(quadTree1.isLeaf && quadTree1.val) return quadTree1;
        if(quadTree2.isLeaf && quadTree2.val) return quadTree2;
        if(quadTree1.isLeaf && !quadTree1.val) return quadTree2;
        if(quadTree2.isLeaf && !quadTree2.val) return quadTree1;  
        Node tl = Intersect(quadTree1.topLeft, quadTree2.topLeft);
        Node tr = Intersect(quadTree1.topRight, quadTree2.topRight);
        Node bl = Intersect(quadTree1.bottomLeft, quadTree2.bottomLeft);
        Node br = Intersect(quadTree1.bottomRight, quadTree2.bottomRight);
        if(tl.val == tr.val && tl.val == bl.val && tl.val == br.val && tl.isLeaf && tr.isLeaf && bl.isLeaf && br.isLeaf)
            return new Node(tl.val, true, null, null, null, null);        
        return new Node(false, false, tl, tr, bl, br); 
    }
}
}
}
