
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.NAryTreePostorder
{

    // Definition for a Node.
    public class Node
    {
        public int val;
        public IList<Node> children;

        public Node() { }
        public Node(int _val, IList<Node> _children)
        {
            val = _val;
            children = _children;
        }
    }

    public class Solution
    {
        List<int> list;

        void Trace(Node node)
        {
            if (node == null)
                return;
            list.Add(node.val);
            foreach (var n in node.children)
            {
                Trace(n);
            }
        }

        public IList<int> Posteorder(Node root)
        {
            list = new List<int>();
            Trace(root);
            return list;
        }
    }
}

