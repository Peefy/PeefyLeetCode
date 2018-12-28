
# problem 896 : MonotonicArray

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/896.MonotonicArray/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int first = 0;
        int last = A.size() - 1;
        bool Not_found = true;
        if (last <= 1)
            return true;
        else if (A[0] < A[last]){
            while (first < last && Not_found){
                if (A[first] <= A[first+1] && A[last] >= A[last-1]){
                    first += 1;
                    last -= 1;
                }
                else
                    Not_found = false;
            }
            return Not_found;
        }
        else if (A[0] > A[last]){
            while (first < last && Not_found){
                if (A[first] >= A[first+1] && A[last] <= A[last-1]){
                    first += 1;
                    last -= 1;
                }
                else
                    Not_found = false;
            }
            return Not_found;
        }
        else{
            bool result = true;
            for(int i = 1; i < A.size(); i++){
                if (A[i]!=A[0]){
                    result = false;
                    break;
                }
            }   
            return result;
        }
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool IsMonotonic(int[] A) {
         return increasing(A) || decreasing(A);
    }

    public bool increasing(int[] A) {
        for (int i = 0; i < A.Length - 1; ++i)
            if (A[i] > A[i+1]) return false;
        return true;
    }

    public bool decreasing(int[] A) {
        for (int i = 0; i < A.Length - 1; ++i)
            if (A[i] < A[i+1]) return false;
        return true;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean isMonotonic(int[] A) {
        int first = 0;
        int last = A.length - 1;
        boolean Not_found = true;
        if (last <= 1)
            return true;
        else if (A[0] < A[last]){
            while (first < last && Not_found){
                if (A[first] <= A[first+1] && A[last] >= A[last-1]){
                    first += 1;
                    last -= 1;
                }
                else
                    Not_found = false;
            }
            return Not_found;
        }
        else if (A[0] > A[last]){
            while (first < last && Not_found){
                if (A[first] >= A[first+1] && A[last] <= A[last-1]){
                    first += 1;
                    last -= 1;
                }
                else
                    Not_found = false;
            }
            return Not_found;
        }
        else{
            boolean result = true;
            for(int i = 1; i < last + 1; i++){
                if (A[i]!=A[0]){
                    result = false;
                    break;
                }
            }   
            return result;
        }
    }
}

```

## Python Solution

```python

class Solution:
    def isMonotonic(self, A):
        """
        :type A: List[int]
        :rtype: bool
        """
        flag = []
        for i in range(len(A) - 1):
            if A[i + 1] != A[i]:
                flag.append(A[i + 1] > A[i])
        for i in range(len(flag) - 1):
            if flag[i] != flag[i + 1]:
                return False
        return True

```





