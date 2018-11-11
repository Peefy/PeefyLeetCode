
# problem 558 ：Quad Tree Intersection

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/501-600/558.QuadTreeIntersection/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    Node* intersect(Node* quadTree1, Node* quadTree2) {
        if(quadTree1->isLeaf && quadTree1->val) return quadTree1;
        if(quadTree2->isLeaf && quadTree2->val) return quadTree2;
        if(quadTree1->isLeaf && !quadTree1->val) return quadTree2;
        if(quadTree2->isLeaf && !quadTree2->val) return quadTree1;  
        auto tl = intersect(quadTree1->topLeft, quadTree2->topLeft);
        auto tr = intersect(quadTree1->topRight, quadTree2->topRight);
        auto bl = intersect(quadTree1->bottomLeft, quadTree2->bottomLeft);
        auto br = intersect(quadTree1->bottomRight, quadTree2->bottomRight);
        if(tl->val == tr->val && tl->val == bl->val && tl->val == br->val && tl->isLeaf && tr->isLeaf && bl->isLeaf && br->isLeaf)
            return new Node(tl->val, true, nullptr, nullptr, nullptr, nullptr);        
        return new Node(false, false, tl, tr, bl, br);  
    }
};

```

## C# Solution

```csharp

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

```

## Java Solution

```java

class Solution {
    public Node intersect(Node quadTree1, Node quadTree2) {
        if(quadTree1.isLeaf && quadTree1.val) return quadTree1;
        if(quadTree2.isLeaf && quadTree2.val) return quadTree2;
        if(quadTree1.isLeaf && !quadTree1.val) return quadTree2;
        if(quadTree2.isLeaf && !quadTree2.val) return quadTree1;  
        Node tl = intersect(quadTree1.topLeft, quadTree2.topLeft);
        Node tr = intersect(quadTree1.topRight, quadTree2.topRight);
        Node bl = intersect(quadTree1.bottomLeft, quadTree2.bottomLeft);
        Node br = intersect(quadTree1.bottomRight, quadTree2.bottomRight);
        if(tl.val == tr.val && tl.val == bl.val && tl.val == br.val && tl.isLeaf && tr.isLeaf && bl.isLeaf && br.isLeaf)
            return new Node(tl.val, true, null, null, null, null);        
        return new Node(false, false, tl, tr, bl, br);  
    }
}

```

## Python Solution

```python

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

```





