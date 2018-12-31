
# problem 905 : SortArrayByParity

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/901-1000/905.SortArrayByParity/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int left = 0;
        int right = A.size() - 1;
        while (left < right){
            if (A[left] % 2 == 0)
                left += 1;
            else {
                if (A[right] % 2 == 0)
                    swap(A[left], A[right]);        
                right -= 1;
            }
        }
        return A;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int[] SortArrayByParity(int[] A)
        {
            int p1 = 0, p2 = A.Length - 1;
            int tmp;
            while (p1 < p2)
            {
                while (p1 < p2 && (A[p1] & 1) == 0)
                {
                    p1 = p1 + 1;
                }
                while (p1 < p2 && (A[p2] & 1) != 0)
                {
                    p2 = p2 - 1;
                }
                tmp = A[p1];
                A[p1] = A[p2];
                A[p2] = tmp;
            }
            tmp = A[p1];
            A[p1] = A[p2];
            A[p2] = tmp;
            return A;
        }
    }

```

## Java Solution

```java

class Solution {
    public int[] sortArrayByParity(int[] A) {
        int left = 0;
        int right = A.length - 1;
        while (left < right){
            if (A[left] % 2 == 0)
                left += 1;
            else {
                if (A[right] % 2 == 0){
                    int temp = A[left];
                    A[left] = A[right];
                    A[right] = temp;
                }
                right -= 1;
            }
        }
        return A;
    }
}

```

## Python Solution

```python

class Solution:
    def sortArrayByParity(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        left = 0
        right = len(A) - 1
        while left < right:
            if A[left] % 2 == 0:
                left += 1
            else:
                if A[right] % 2 == 0:
                    A[left], A[right] = A[right], A[left]
                right -= 1
        return A

```





