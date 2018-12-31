
# problem 922 : SortArrayByParityII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/901-1000/922.SortArrayByParityII/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> odd;
        vector<int> even;
        for (int a : A){
            if (a % 2 == 0)
                odd.push_back(a);
            else
                even.push_back(a);
        }
        for(int i = 0, j = 0; i < A.size(); i+=2,j++){
            A[i] = even[j];
        }
        for(int i = 0, j = 0; i < A.size(); i+=2,j++){
            A[i] = odd[j];
        }
        return A;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int[] SortArrayByParityII(int[] A) {
        int[] temp = new int[A.Length];
        int i = 0;
        int j = 1;
        foreach (int num in A) {
            if ((num & 1) == 1) {
                temp[j] = num;
                j += 2;
            } else {
                temp[i] = num;
                i += 2;
            }
        }
        return temp;
    }
}

```

## Java Solution

```java

class Solution {
    public int[] sortArrayByParityII(int[] A) {
        int[] temp = new int[A.length];
        int i = 0;
        int j = 1;
        for (int num : A) {
            if ((num & 1) == 1) {
                temp[j] = num;
                j += 2;
            } else {
                temp[i] = num;
                i += 2;
            }
        }
        return temp;
    }
}

```

## Python Solution

```python

class Solution:
    def sortArrayByParityII(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        old = []
        even = []
        for a in A:
            if a % 2 == 0:
                old.append(a)
            else:
                even.append(a)
        for i in range(len(A)):
            if i % 2 == 0:
                A[i] = old.pop()
            else:
                A[i] = even.pop()
        return A

```





