using System;
using System.Collections.Generic;

namespace PeefyLeetCode.MaximumDepthOfNAaryTree
{

// Definition for a Node.
public class Node {
    public int val;
    public IList<Node> children;

    public Node(){}
    public Node(int _val,IList<Node> _children) {
        val = _val;
        children = _children;
    }
}

public class Solution {
    public int MaxDepth(Node root) {
        if( root == null )return 0;
        int dep = 0;
        foreach( var now in root.children )
            dep = Math.Max( dep , MaxDepth( now ));
        return dep + 1 ; 
    }
}
}
