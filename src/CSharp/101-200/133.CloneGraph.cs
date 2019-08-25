
using System;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.CloneGraph
{

    public class Node
    {
        public int val;
        public IList<Node> neighbors;

        public Node() { }
        public Node(int _val, IList<Node> _neighbors)
        {
            val = _val;
            neighbors = _neighbors;
        }
        public class Solution
        {
            private Dictionary<Node, Node> map;
            public Node CloneGraph(Node node)
            {
                map = new Dictionary<Node, Node>();
                return dfs(node);
            }
            private Node dfs(Node node)
            {
                if (!map.ContainsKey(node))
                {
                    Node copy = new Node(node.val, new List<Node>());
                    map.Add(node, copy);
                    foreach (Node nei in node.neighbors)
                    {
                        copy.neighbors.Add(dfs(nei));
                    }
                }
                return map[node];
            }
        }
    }
}