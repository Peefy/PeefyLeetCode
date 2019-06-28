
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class Node {
    public int val;
    public List<Node> neighbors;

    public Node() {}

    public Node(int _val,List<Node> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
    private HashMap<Node, Node> map;
    public Node cloneGraph(Node node) {
        map = new HashMap<>();
        return dfs(node);        
    }
    private Node dfs(Node node) {
        if(!map.containsKey(node)){
            Node copy = new Node(node.val, new ArrayList<Node>());
            map.put(node, copy);
            for(Node nei : node.neighbors){
                copy.neighbors.add(dfs(nei));
            }
        }
        return map.get(node);
    }
}

