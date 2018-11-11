
# problem 559 : Maximum Depth Of N-ary Tree

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/559.MaximumDepthOfN-aryTree/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int maxDepth(Node* root) {
        if( root == nullptr ) return 0;
        int dep = 0;
        for( auto now : root->children )
            dep = max( dep , maxDepth( now ));
        return dep + 1 ; 
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int MaxDepth(Node root) {
        if( root == null )return 0;
        int dep = 0;
        foreach( var now in root.children )
            dep = Math.Max( dep , MaxDepth( now ));
        return dep + 1 ; 
    }
}

```

## Java Solution

```java

class Solution {
    public int maxDepth(Node root) {
        if (root == null) {
            return 0;
        }
        LinkedList<Node> childlist = new LinkedList<>();
        childlist.addAll(root.children);
        int count = 1;
        while (childlist.size() != 0) {
            count += 1;
            LinkedList<Node> newlist = new LinkedList<>();
            for (Node child : childlist) {
                newlist.addAll(child.children);
            }
            childlist = newlist;
        }
        return count;
    }
}

```

## Python Solution

```python

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: Node
        :rtype: int
        """
        return 0 if root is None else (1 if len(root.children) == 0 else max(map(lambda x : self.maxDepth(x), root.children)) + 1) 

```





