
# problem 222 : CountCompleteTreeNodes

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/222.CountCompleteTreeNodes/problem.png"/>

## C++ Solution

```c++

class Solution
{
public:
    int countNodes(TreeNode *root)
    {
        int h = 0, lo = 0, hi = 0;
        if (!root)
            return 0;

        TreeNode *node = root;
        while (node)
        {
            ++h;
            node = node->left;
        }

        lo = 1 << (h - 1); // 4
        hi = (1 << h) - 1; // 7

        while (lo < hi)
        {
            int mid = lo + (hi - lo + 1 >> 1); // 6,7
            int n = mid;                       // 6,7
            stack<int> path;                   // 6,3 | 7,3
            while (n != 1)
            {
                path.push(n);
                n >>= 1;
            }
            node = root;
            int cur = 1;
            while (node && !path.empty())
            {
                if ((cur << 1) == path.top())
                { // 1*2 == 3, 3*2 == 6 | 1*2 == 3, 3*2 == 7
                    node = node->left;
                }
                else
                {
                    node = node->right;
                }
                cur = path.top();
                path.pop();
            }

            if (node)
            {
                lo = mid; // 6
            }
            else
            {
                hi = mid - 1;
            }
        }
        return lo;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int CountNodes(TreeNode root) {
        if(root == null){
           return 0;
        } 
        int left = countLevel(root.left);
        int right = countLevel(root.right);
        if(left == right){
            return CountNodes(root.right) + (1<<left);
        }else{
            return CountNodes(root.left) + (1<<right);
        }
    }
    private int countLevel(TreeNode root){
        int level = 0;
        while(root != null){
            level++;
            root = root.left;
        }
        return level;
    }
}

```

## Java Solution

```java

class Solution {
    public int countNodes(TreeNode root) {
        if(root == null){
           return 0;
        } 
        int left = countLevel(root.left);
        int right = countLevel(root.right);
        if(left == right){
            return countNodes(root.right) + (1<<left);
        }else{
            return countNodes(root.left) + (1<<right);
        }
    }
    private int countLevel(TreeNode root){
        int level = 0;
        while(root != null){
            level++;
            root = root.left;
        }
        return level;
    }
}

```

## Python Solution

```python

class Solution:
    def countNodes(self, root):
        if root is None:
            return 0
        left = self.countLevel(root.left)
        right = self.countLevel(root.right)
        if left == right:
            return self.countNodes(root.right) + (1 << left)
        else:
            return self.countNodes(root.left) + (1 << right)
        
    
    def countLevel(self, root):
        level = 0
        while root is not None:
            level += 1
            root = root.left
        return level     

```




