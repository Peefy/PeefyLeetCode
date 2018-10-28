
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.TreeLevelOrder {


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
    public IList<IList<int>> LevelOrder(Node root) {
        List<IList<int>> r = new List<IList<int>>();
        Queue<Node> q = new Queue<Node>();
        if (root == null)
            return r;
        q.Enqueue(root);
        while (q.Count != 0) {
            List<int> child = new List<int>();
            int n = q.Count;
            for (int i = 0; i < n; i++) {
                Node node = q.Dequeue();
                child.Add(node.val);
                foreach (Node nn in node.children){
                    q.Enqueue(nn);
                }
            }
            r.Add(child);
        }
        return r;
    }
}
}

