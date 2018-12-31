
# problem 961 : RepeatedNTimes

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/901-1000/961.RepeatedNTimes/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_set<int> a;
        for (int i : A){
            if (a.find(i) != a.end())
                return i;
            else
                a.insert(i);
        }
        return -1;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int RepeatedNTimes(int[] A) {
        HashSet<int> set = new HashSet<int>();
        for (int i = 0; i < A.Length; ++i) {
            if (set.Contains(A[i])) {
                return A[i];
            }
            else
                set.Add(A[i]);
        }
        return 0;
    }
}

```

## Java Solution

```java

class Solution {
    public int repeatedNTimes(int[] A) {
        Set<Integer> set = new HashSet<>();
        for (int i : A) {
            if (!set.add(i)) {
                return i;
            }
        }
        return 0;
    }
}

```

## Python Solution

```python

class Solution:
    def repeatedNTimes(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        from collections import Counter
        counteritems = Counter(A).items()
        for k, v in counteritems:
            if v > len(A) / 2 - 1:
                return k

```





