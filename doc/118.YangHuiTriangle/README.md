
# problem 118 : YangHuiTriangle

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/118.YangHuiTriangle/problem.png"/>

## C++ Solution

```c++

class Solution
{
  public:
    vector<int> generate_next(vector<int> arr)
    {
        auto n = arr.size();
        vector<int> r;
        r.push_back(1);     
        for(int i = 0; i < n - 1; i++)
        {
            r.push_back(arr[i] + arr[i + 1]);
        } 
        r.push_back(1);
        return r;
    }

    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> none;
        vector<int> one = {1};
        vector<int> two = {1, 1};
        if (numRows == 0)
            return none;
        if (numRows == 1)
        {
            none.push_back(one); 
            return none;
        }
        if (numRows == 2)
        {
            none.push_back(one);
            none.push_back(two);
            return none;
        }
        none.push_back(one);
        none.push_back(two);
        auto arr = two;
        for(int i = 0; i < numRows - 2; i++)
        {
            arr = this->generate_next(arr);
            none.push_back(arr);
        }
        return none;
        
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public List<int> GenerateNext(List<int> arr)
        {
            var n = arr.Count;
            var r = new List<int>();
            r.Add(1);
            for (int i = 0; i < n - 1; i++)
            {
                r.Add(arr[i] + arr[i + 1]);
            }
            r.Add(1);
            return r;
        }
        public IList<IList<int>> Generate(int numRows)
        {
            var none = new List<IList<int>>();
            var one = new List<int>();
            one.Add(1);
            var two = new List<int>();
            two.Add(1);
            two.Add(1);
            if (numRows == 0)
                return none;
            if (numRows == 1)
            {
                none.Add(one);
                return none;
            }
            if (numRows == 2)
            {
                none.Add(one);
                none.Add(two);
                return none;
            }
            none.Add(one);
            none.Add(two);
            var arr = two;
            for (int i = 0; i < numRows - 2; i++)
            {
                arr = GenerateNext(arr);
                none.Add(arr);
            }
            return none;
        }
    }

```

## Java Solution

```java

class Solution {
    public ArrayList<Integer> generateNext(ArrayList<Integer> arr)
    {
        int n = arr.size();
        ArrayList<Integer> r = new ArrayList<Integer>();
        r.add(1);     
        for(int i = 0; i < n - 1; i++)
        {
            r.add(arr.get(i) + arr.get(i + 1));
        } 
        r.add(1);
        return r;
    }
    public List<List<Integer>> generate(int numRows) {
        ArrayList<List<Integer>> none = new ArrayList<List<Integer>>();
        ArrayList<Integer> one = new ArrayList<>();
        one.add(1);
        ArrayList<Integer> two = new ArrayList<>();
        two.add(1);
        two.add(1);
        if (numRows == 0)
            return none;
        if (numRows == 1) {
            none.add(one);
            return none;
        }
        if (numRows == 2) {
            none.add(one);
            none.add(two);
            return none;
        }
        none.add(one);
        none.add(two);
        ArrayList<Integer> arr = two;
        for(int i = 0; i < numRows - 2; i++)
        {
            arr = generateNext(arr);
            none.add(arr);
        }
        return none;
    }
}
```

## Python Solution

```python

class Solution:
    def generate_next(self, arr):
        n = len(arr)
        r = []
        r.append(1)
        for i in range(n - 1):
            r.append(arr[i] + arr[i + 1])
        r.append(1)
        return r

    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        null = []
        one = [1]
        two = [1, 1]
        if numRows == 0:
            return null
        if numRows == 1:
            null.append(one)
            return null
        if numRows == 2:
            null.append(one)
            null.append(two)
            return null
        null.append(one)
        null.append(two)
        arr = two
        for i in range(numRows - 2):
            arr = self.generate_next(arr)
            null.append(arr)
        return null

```


