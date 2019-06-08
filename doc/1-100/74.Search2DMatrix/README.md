
# Problem 74 : Search2DMatrix

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/74.Search2DMatrix/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if (m == 0){
            return false;
        }
        int n = matrix[0].size();
        int left = 0;
        int right = m * n - 1;
        while (left <= right){
            int middle = (left + right) / 2;
            int element = matrix[middle / n][middle % n];
            if (element == target)
                return true;
            else if (element < target)
                left = middle + 1;
            else if (element >target)
                right = middle - 1;
        }
        return false;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool SearchMatrix(int[][] matrix, int target) {
        int m = matrix.Length;
        if (m == 0){
            return false;
        }
        int n = matrix[0].Length;
        int left = 0;
        int right = m * n - 1;
        while (left <= right){
            int middle = (left + right) / 2;
            int element = matrix[middle / n][middle % n];
            if (element == target)
                return true;
            else if (element < target)
                left = middle + 1;
            else if (element >target)
                right = middle - 1;
        }
        return false;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int m = matrix.length;
        if (m == 0){
            return false;
        }
        int n = matrix[0].length;
        int left = 0;
        int right = m * n - 1;
        while (left <= right){
            int middle = (left + right) / 2;
            int element = matrix[middle / n][middle % n];
            if (element == target)
                return true;
            else if (element < target)
                left = middle + 1;
            else if (element >target)
                right = middle - 1;
        }
        return false;
    }
}

```

## Python Solution

```python

class Solution:
    def searchMatrix(self, matrix, target: int) -> bool:
        m = len(matrix)
        if m == 0:
            return False
        n = len(matrix[0])
        left, right = 0, m * n - 1
        while left <= right:
                pivot_idx = (left + right) // 2
                pivot_element = matrix[pivot_idx // n][pivot_idx % n]
                if target == pivot_element:
                    return True
                else:
                    if target < pivot_element:
                        right = pivot_idx - 1
                    else:
                        left = pivot_idx + 1
        return False

```


