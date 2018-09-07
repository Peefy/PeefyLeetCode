
# problem 427 : ConstructQuadTree

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/427.ConstructQuadTree/problem.png"/>

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/427.ConstructQuadTree/problem1.png"/>

## C++ Solution

```c++

def construct_div(self, grid, left, top, width):
        if width == 1:
            if grid[top][left] == 1:
                return Node(True, True, None, None, None, None)
            return Node(False, True, None, None, None, None)
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

## C# Solution

```csharp



```

## Java Solution

```java



```

## Python Solution

```python



```





