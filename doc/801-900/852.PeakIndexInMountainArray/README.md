
# problem 852 : PeakIndexInMountainArray

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/801-900/852.PeakIndexInMountainArray/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int left = 0;
        int right = A.size();
        while (left < right){
            int mid = (left + right) / 2;
            if (A[mid] < A[mid + 1])  
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int PeakIndexInMountainArray(int[] A) {
        int left = 0;
        int right = A.Length;
        while (left < right){
            int mid = (left + right) / 2;
            if (A[mid] < A[mid + 1])  
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
}

```

## Java Solution

```java

class Solution {
    public int peakIndexInMountainArray(int[] A) {
        int left = 0;
        int right = A.length;
        while (left < right){
            int mid = (left + right) / 2;
            if (A[mid] < A[mid + 1])  
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
}

```

## Python Solution

```python

class Solution:
    def peakIndexInMountainArray(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        left, right = 0, len(A)
        while left < right:
            mid = int((left + right) / 2)
            if A[mid] < A[mid + 1]:  
                left = mid + 1
            else:
                right = mid 
        return left

```





