
# problem 133 : CloneGraph

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/133.CloneGraph/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    unordered_map<Node*, Node*> map;
    Node* cloneGraph(Node* node) {
        return dfs(node);
    }

    Node* dfs(Node* node) {
        if(map.find(node) == map.end()){
            Node* copy = new Node(node->val, vector<Node*>());
            map[node] = copy;
            for(Node* nei : node->neighbors){
                copy->neighbors.push_back(dfs(nei)); 
            }
        }
        return map[node];
    }
};

```

## C# Solution

```csharp

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

```

## Java Solution

```java

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

```

## Python Solution

```python

class Solution:
    def cloneGraph(self, node):
        self.dic = {} 
        return self.dfs(node)

    def dfs(self, node):
        if node not in self.dic:
            self.dic[node] = copy = Node(node.val, [])
            for nei in node.neighbors: 
                copy.neighbors.append(self.dfs(nei)) 
        return self.dic[node]

```


