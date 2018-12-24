
# problem 888 : FairCandySwap

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/888.FairCandySwap/problem.png"/>

## C++ Solution

```c++


static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        unordered_set<int> setB;
        int sumA = 0, sumB = 0;
        for (int a : A){
            sumA += a;
        }
        for (int b : B){
            sumB += b;
            setB.insert(b);
        }
        int sub = (sumA - sumB) / 2;
        for (int a : A){
            if (setB.find(a - sub) != setB.end()){
                return vector<int> {a, a - sub};
            }
        }
        return vector<int> {0, 0 - sub};
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int[] FairCandySwap(int[] A, int[] B) {
        HashSet<int> setB = new HashSet<int>();
        int sumA = 0, sumB = 0;
        foreach (int a in A){
            sumA += a;
        }
        foreach (int b in B){
            sumB += b;
            setB.Add(b);
        }
        int sub = (sumA - sumB) / 2;
        foreach (int a in A){
            if (setB.Contains(a - sub) == true){
                return new int[] {a, a - sub};
            }
        }
        return new int[] {0, 0 - sub};
    }
}

```

## Java Solution

```java


class Solution {
    public int[] fairCandySwap(int[] A, int[] B) {
        HashSet<Integer> setB = new HashSet<>();
        int sumA = 0, sumB = 0;
        for (int a : A){
            sumA += a;
        }
        for (int b : B){
            sumB += b;
            setB.add(b);
        }
        int sub = (sumA - sumB) / 2;
        for (int a : A){
            if (setB.contains(a - sub) == true){
                return new int[] {a, a - sub};
            }
        }
        return new int[] {0, 0 - sub};
    }
}

```

## Python Solution

```python

class Solution:
    def fairCandySwap(self, A, B):
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: List[int]
        """
        sub = sum(A) - sum(B)
        sub = sub // 2
        setB = set(B)
        for a in A:
            if a - sub in setB:
                return [a, a - sub]
        return None

```





