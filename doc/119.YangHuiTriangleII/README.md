
# problem 119 : YangHuiTriangle II

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/119.YangHuiTriangleII/problem.png"/>

注意C#的代码，求解杨辉三角第n行的完美代码，时间复杂度O(n),空间复杂度O(n)

## C++ Solution

```c++

class Solution
{
  public:
    vector<int> getRow(int rowIndex)
    {
        ++rowIndex;
        vector<int> init;
        if (rowIndex == 0)
            return init;
        init.push_back(1);  
        for(int i = 0; i < rowIndex - 1; i++)
        {
            init.push_back(0);
            init.insert(init.begin(), 0);           
            for(int j = 0; j < init.size() - 1; j++)
            {
                init[j] = init[j] + init[j + 1];
            }
        }
        init.erase(init.begin() + rowIndex, init.end());
        return init;
    }
};

```

## C# Solution

```csharp

    class Solution
    {
        public IList<int> GetRow(int rowIndex)
        {
            long nCk = 1;
            var result = new List<int>();
            for (int i = 0; i <= rowIndex; i++)
            {
                result.Add((int)nCk);
                nCk = nCk * (rowIndex - i) / (i + 1);
            }
            return result;
        }
    }

```

## Java Solution

```java

class Solution {
    public List<Integer> getRow(int rowIndex) {
        ++rowIndex;
        ArrayList<Integer> init = new ArrayList<>();
        if (rowIndex == 0)
            return init;
        init.add(1);
        for (int i = 0; i < rowIndex - 1; i++) {
            init.add(0);
            init.add(0, 0);
            for (int j = 0; j < init.size() - 1; j++) {
                init.set(j, init.get(j) + init.get(j + 1));
            }
        }
        init.removeIf((i1) -> {return i1 == 0;});
        return init;
    }
}

```

## Python Solution

```python

class Solution:
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        rowIndex += 1
        if rowIndex == 0:
            return []
        init = [1]
        for i in range(rowIndex - 1):
            init.append(0)
            init.insert(0, 0)
            for j in range(len(init) - 1):
                init[j] = init[j] + init[j + 1]
        return init[0 : rowIndex]


```


