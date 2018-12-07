
# problem 728 : SelfDividingNumbers

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/728.SelfDividingNumbers/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int i = left; i <= right; i++) {
            int j = i;
            while (j > 0){
                int d = j % 10;
                if (d == 0) {
                    break;
                }
                if (i % d != 0){
                    break;
                }
                j /= 10;
            }
            if (j == 0)
                res.push_back(i);
        }
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<int> SelfDividingNumbers(int left, int right) {
        var res = new List<int>();
        for (int i = left; i <= right; i++) {
            int j = i;
            while (j > 0){
                int d = j % 10;
                if (d == 0) {
                    break;
                }
                if (i % d != 0){
                    break;
                }
                j /= 10;
            }
            if (j == 0)
                res.Add(i);
        }
        return res;
    }
}

```

## Java Solution

```java

class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        ArrayList<Integer> res = new ArrayList<>();
        for (int i = left; i <= right; i++) {
            int j = i;
            while (j > 0){
                int d = j % 10;
                if (d == 0) {
                    break;
                }
                if (i % d != 0){
                    break;
                }
                j /= 10;
            }
            if (j == 0)
                res.add(i);
        }
        return res;
    }
}


```

## Python Solution

```python

class Solution:
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        r = []
        i = left
        while i <= right:
            if i <= 9:
                r.append(i)
                i += 1
                continue
            stri = str(i)
            numlist = list(filter(lambda c : c != '0' and i % int(c) == 0, stri))
            if len(stri) == len(numlist):
                r.append(i)
            i += 1
        return r

```





