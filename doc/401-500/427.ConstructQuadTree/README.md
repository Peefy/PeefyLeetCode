
# problem 427 : ConstructQuadTree

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/427.ConstructQuadTree/problem.png"/>

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/427.ConstructQuadTree/problem1.png"/>

## C++ Solution

```c++
class ExNode : public Node {
public:
    bool isRand;
    ExNode(bool _isrand) : Node(){
        isRand = _isrand;
    }
    ExNode(){
        isRand = false;
    }
};

class Solution {
public:
    ExNode* constuct_node(vector<vector<int> >& grid, int left, int top, int width){
        if (width == 1){
            ExNode* node = new ExNode(false);
            node->isLeaf = true;
            node->val = grid[top][left] == 1;
            return node;           
        }
        auto half_width = width / 2;
        auto topleft = this->constuct_node(grid, left, top, half_width);
        auto topright = this->constuct_node(grid, left + half_width, top, half_width);
        auto bottomleft = this->constuct_node(grid, left, top + half_width, half_width);
        auto bottomright = this->constuct_node(grid, left + half_width, top + half_width, half_width);
        auto node = new ExNode(false);
        if (topleft->val == true && topright->val == true 
            && bottomleft->val == true && bottomright->val == true && 
             topleft->isRand == false && topright->isRand == false && bottomleft->isRand == false && bottomright->isRand == false){
                node->val = true;
                node->isLeaf = true;
                return node;
        }
        if (topleft->val == false && topright->val == false 
            && bottomleft->val == false && bottomright->val == false){
                node->val = false;
                node->isLeaf = true;
                return node;
        }
        node->isRand = true;
        node->val = true;
        node->topLeft = topleft;
        node->topRight = topright;
        node->bottomLeft = bottomleft;
        node->bottomRight = bottomright;
        node->isLeaf = false;
        return node;
    }

    Node* construct(vector<vector<int> >& grid) {
        return this->constuct_node(grid, 0, 0, grid.size());
    }
};

```

## C# Solution

```csharp

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

```

## Java Solution

```java

class ExtendNode extends Node{
    public boolean isRand;
    public ExtendNode(boolean _isRand){
        isRand = _isRand;
    }
}

class Solution {
    public ExtendNode constructNode(int[][] grid, int left, int top, int width){
        if (width == 1) {
            ExtendNode node = new ExtendNode(false);
            node.val = grid[top][left] == 1;
            node.isLeaf = true;
            return node;
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

    public Node construct(int[][] grid) {
        return constructNode(grid, 0, 0, grid.length);
    }
}

```

## Python Solution

```python

class Solution:
    def construct_div(self, grid, left, top, width):
        if width == 1:
            return Node(grid[top][left] == 1, True, None, None, None, None)
        half_width = width // 2
        grid_1 = left, top, half_width
        grid_2 = left + half_width, top, half_width
        grid_3 = left, top + half_width, half_width
        grid_4 = left + half_width, top + half_width, half_width
        topleft = self.construct_div(grid, grid_1[0], grid_1[1], grid_1[2])
        topright = self.construct_div(grid, grid_2[0], grid_2[1], grid_2[2])
        bottomleft = self.construct_div(grid, grid_3[0], grid_3[1], grid_3[2])
        bottomright = self.construct_div(grid, grid_4[0], grid_4[1], grid_4[2])
        node = Node(True, True, None, None, None, None)
        if topleft.val == True and topright.val == True and bottomleft.val == True and bottomright.val == True:
            node.val = True
            node.isLeaf = True
            return node
        if topleft.val == False and topright.val == False and bottomleft.val == False and bottomright.val == False:
            node.val = False
            node.isLeaf = True
            return node
        node.val = "*"
        node.topLeft = topleft
        node.topRight = topright
        node.bottomLeft = bottomleft
        node.bottomRight = bottomright
        node.isLeaf = False
        return node
        
    def construct(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: Node
        """
        return self.construct_div(grid, 0, 0, len(grid))

```





