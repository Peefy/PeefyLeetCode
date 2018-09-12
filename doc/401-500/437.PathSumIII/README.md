
# problem 437 : PathSumIII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/401-500/437.PathSumIII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int pathSumValue(TreeNode* node, int sum, int val){
        if (node == nullptr) {
            return 0;
        }
        int count = 0;
        val += node->val;
        if (val == sum)
            count += 1;
        return count + pathSumValue(node->left, sum, val) + pathSumValue(node->right, sum, val);
    }

    int pathSum(TreeNode* root, int sum) {
        if (root == nullptr)
            return 0;
        return pathSum(root->left, sum) + pathSum(root->right, sum) + pathSumValue(root, sum, 0);
    }
};

```

## C# Solution

```csharp

public class Solution {
private int count = 0;
    public void dfs(TreeNode p, int sum, int pathSum, Dictionary<int, int> preDict) {
        if (p != null) {
            pathSum += p.val;
            if (preDict.TryGetValue(pathSum - sum, out var temp) == true)
            {
                count += temp;
            }
            if(preDict.ContainsKey(pathSum) == false){
                preDict.Add(pathSum, 1);
            }else{
                preDict[pathSum] = preDict[pathSum] + 1;
            }
            dfs(p.left, sum, pathSum, preDict);
            dfs(p.right, sum, pathSum, preDict);
            preDict[pathSum] = preDict[pathSum] - 1;
        }
    }

    public int PathSum(TreeNode root, int sum) {
        count = 0;
        Dictionary<int, int> preDict = new Dictionary<int, int>();
        preDict.Add(0, 1);
        dfs(root, sum, 0, preDict);
        return count;
    }
}

```

## Java Solution

```java

class Solution {
    private int count = 0;
    public void dfs(TreeNode p, int sum, int pathSum, HashMap<Integer, Integer> preDict) {
        if (p != null) {
            pathSum += p.val;
            Integer temp = preDict.get(pathSum - sum);
            count += (temp == null ? 0 : temp);
            if(preDict.containsKey(pathSum) == false){
                preDict.put(pathSum, 1);
            }else{
                int c = preDict.get(pathSum) + 1;
                preDict.remove(pathSum);
                preDict.put(pathSum, c);
            }
            dfs(p.left, sum, pathSum, preDict);
            dfs(p.right, sum, pathSum, preDict);
            int c = preDict.get(pathSum) - 1;
            preDict.remove(pathSum);
            preDict.put(pathSum, c);
        }
    }

    public int pathSum(TreeNode root, int sum) {
        count = 0;
        HashMap<Integer, Integer> preDict = new HashMap<>();
        preDict.put(0, 1);
        dfs(root, sum, 0, preDict);
        return count;
    }
}

```

## Python Solution

```python

class Solution:
    def pathSumValue(self, node, sum, val):
        if node is None:
            return 0    
        count = 0     
        val += node.val
        if val == sum:
            count += 1
        return count + self.pathSumValue(node.left, sum, val) + self.pathSumValue(node.right, sum, val)
 
    def pathSum(self, root, sum):
        """
        :type root: TreeNode
        :type sum: int
        :rtype: int
        """
        if root is None:
            return 0 
        return self.pathSum(root.left, sum) + self.pathSum(root.right, sum) + self.pathSumValue(root, sum, 0)


```





