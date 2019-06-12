
# Problem 89 : GrayCode

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/89.GrayCode/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<int> grayCode(int n) {
        int count = 1 << n;
        vector<int> ans;
        for (size_t i = 0; i < count; i++){
            ans.push_back(i ^ i >> 1);
        }
        return ans;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<int> GrayCode(int n) {
        List<int> ans = new List<int>();
        int count = 1 << n;
        for (int i = 0; i < count; i++){
            ans.Add(i ^ i >> 1);
        }
        return ans;
    }
}

```

## Java Solution

```java

class Solution {
    public List<Integer> grayCode(int n) {
        List<Integer> ans = new ArrayList<>();
        int count = 1 << n;
        for (int i = 0; i < count; i++){
            ans.add(i ^ i >> 1);
        }
        return ans;
    }
}

```

## Python Solution

```python

class Solution:
    def grayCode(self, n: int) -> list:
        return [i ^ i >> 1  for i in range(1 << n)]

```


