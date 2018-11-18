
# problem 606 : Tree2str

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/601-700/606.Tree2str/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    string tree2str(TreeNode* t) {
        if (t == nullptr)
            return "";
        string s = to_string(t->val); 
        string left = tree2str(t->left);
        string right = tree2str(t->right);
        if (left == "" && right == "")
            return s;
        if (right == "")
            return s+'('+left+')';
        return s+'('+left+')'+'('+right+')';
    }
};

```

## C# Solution

```csharp

public class Solution
{
    public string Tree2str(TreeNode t)
    {
        StringBuilder result = new StringBuilder();
        tree2str(t, result);
        return result.ToString();
    }
    void tree2str(TreeNode t, StringBuilder result)
    {
        if (t == null)
        {
            return;
        }
        result.Append(t.val);
        if (t.left != null)
        {
            result.Append("(");
            tree2str(t.left, result);
            result.Append(")");
        }
        if (t.right != null)
        {
            if (t.left == null)
            {
                result.Append("()(");
            }
            else
            {
                result.Append("(");
            }
            tree2str(t.right, result);
            result.Append(")");
        }
    }
}

```

## Java Solution

```java

class Solution {
    public String tree2str(TreeNode t) {
        if (t == null)
            return "";
        String s = String.valueOf(t.val);  
        String left = tree2str(t.left);
        String right = tree2str(t.right);
        if (left == "" && right == "")
            return s;
        if (right == "")
            return s+'('+left+')';
        return s+'('+left+')'+'('+right+')';
    }
}

```

## Python Solution

```python

class Solution:
    def tree2str(self, t):
        """
        :type t: TreeNode
        :rtype: str
        """ 
        if not t:
            return ''
        s = str(t.val)
        left = self.tree2str(t.left)
        right = self.tree2str(t.right)
        if not left and not right:
            return s
        if not right:
            return s+'('+left+')'
        return s+'('+left+')'+'('+right+')'

```





