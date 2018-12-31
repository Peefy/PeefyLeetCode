
# problem 944 : DeleteColumnsToMakeSorted

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/901-1000/944.DeleteColumnsToMakeSorted/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int m = A.size();
        int n = A[0].size();
        int count = 0;  
        for(int j = 0; j < n; j++){
            bool flag = true;
            for(int i = 0; i < m - 1; i++){
                if (A[i][j] > A[i + 1][j]){
                    flag = false;
                    break;
                }
            }
            if (flag == true)
                count++;
        }
        return n - count;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int MinDeletionSize(string[] A) {
        int m = A.Length;
        int n = A[0].Length;
        int count = 0;  
        for(int j = 0; j < n; j++){
            bool flag = true;
            for(int i = 0; i < m - 1; i++){
                if (A[i][j] > A[i + 1][j]){
                    flag = false;
                    break;
                }
            }
            if (flag == true)
                count++;
        }
        return n - count;
    }
}

```

## Java Solution

```java

class Solution {
    public int minDeletionSize(String[] A) {
        int m = A.length;
        int n = A[0].length();
        int count = 0;  
        for(int j = 0; j < n; j++){
            boolean flag = true;
            for(int i = 0; i < m - 1; i++){
                if (A[i].charAt(j) > A[i + 1].charAt(j)){
                    flag = false;
                    break;
                }
            }
            if (flag == true)
                count++;
        }
        return n - count;
    }
}

```

## Python Solution

```python

class Solution:
    def minDeletionSize(self, A):
        """
        :type A: List[str]
        :rtype: int
        """
        m = len(A)
        n = len(A[0])
        count = 0
        for j in range(n):
            flag = True
            for i in range(m - 1):
                if A[i][j] > A[i + 1][j]:
                    flag = False
            if flag == True:
                count += 1
        return n - count

```





