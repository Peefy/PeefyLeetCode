
# Problem 54 : SpiralMatrix

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/54.SpiralMatrix/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.size() == 0)
            return ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int i = 0;
        int j = 0;
        int lrbound[2] = {0, m};
        int udbound[2] = {0, n};
        int shunxu = 0;
        while (ans.size() < m * n){
            if (shunxu == 0){
                while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                    ans.push_back(matrix[j][i]);
                    i += 1;
                }
                j += 1;
                i -= 1;
                udbound[0] += 1;
                shunxu = 1;
            }
            else if (shunxu == 1){
                while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                    ans.push_back(matrix[j][i]);
                    j += 1;
                }
                i -= 1;
                j -= 1;
                lrbound[1] -= 1;
                shunxu = 2;
            }
            else if (shunxu == 2){
                while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                    ans.push_back(matrix[j][i]);
                    i -= 1;
                }
                j -= 1;
                i += 1;
                udbound[1] -= 1;
                shunxu = 3;
            }
            else{
                while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                    ans.push_back(matrix[j][i]);
                    j -= 1;
                }
                i += 1;
                j += 1;
                lrbound[0] += 1;
                shunxu = 0;
            }
        }
        return ans;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public IList<int> SpiralOrder(int[,] matrix) {
        List<int> ans = new List<int>();
        if (matrix.GetLength(0) == 0)
            return ans;    
            int n = matrix.GetLength(0);
            int m = matrix.GetLength(1);
            int i = 0;
            int j = 0;
            int[] lrbound = new int[]{0, m};
            int[] udbound = new int[]{0, n};
            int shunxu = 0;
            while (ans.Count < m * n){
                if (shunxu == 0){
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.Add(matrix[j, i]);
                        i += 1;
                    }
                    j += 1;
                    i -= 1;
                    udbound[0] += 1;
                    shunxu = 1;
                }
                else if (shunxu == 1){
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.Add(matrix[j, i]);
                        j += 1;
                    }
                    i -= 1;
                    j -= 1;
                    lrbound[1] -= 1;
                    shunxu = 2;
                }
                else if (shunxu == 2){
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.Add(matrix[j, i]);
                        i -= 1;
                    }
                    j -= 1;
                    i += 1;
                    udbound[1] -= 1;
                    shunxu = 3;
                }
                else{
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.Add(matrix[j, i]);
                        j -= 1;
                    }
                    i += 1;
                    j += 1;
                    lrbound[0] += 1;
                    shunxu = 0;
                }
            }
        return ans;
    }
}

```

## Java Solution

```java

class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> ans = new ArrayList<>();
        if (matrix.length == 0)
            return ans;    
            int n = matrix.length;
            int m = matrix[0].length;
            int i = 0;
            int j = 0;
            int[] lrbound = new int[]{0, m};
            int[] udbound = new int[]{0, n};
            int shunxu = 0;
            while (ans.size() < m * n){
                if (shunxu == 0){
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.add(matrix[j][i]);
                        i += 1;
                    }
                    j += 1;
                    i -= 1;
                    udbound[0] += 1;
                    shunxu = 1;
                }
                else if (shunxu == 1){
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.add(matrix[j][i]);
                        j += 1;
                    }
                    i -= 1;
                    j -= 1;
                    lrbound[1] -= 1;
                    shunxu = 2;
                }
                else if (shunxu == 2){
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.add(matrix[j][i]);
                        i -= 1;
                    }
                    j -= 1;
                    i += 1;
                    udbound[1] -= 1;
                    shunxu = 3;
                }
                else{
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.add(matrix[j][i]);
                        j -= 1;
                    }
                    i += 1;
                    j += 1;
                    lrbound[0] += 1;
                    shunxu = 0;
                }
            }
        return ans;
    }
}

```

## Python Solution

```python

class Solution:
    def spiralOrder(self, matrix):
        ans = []
        if matrix == []:
            return ans
        n = len(matrix)
        m = len(matrix[0])
        i = 0
        j = 0
        lrbound = [0, m]
        udbound = [0, n]
        shunxu = 0
        while len(ans) < m * n:
            if shunxu == 0:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    ans.append(matrix[j][i])
                    i += 1
                else:
                    j += 1
                    i -= 1
                    udbound[0] += 1
                    shunxu = 1
            elif shunxu == 1:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    ans.append(matrix[j][i])
                    j += 1
                else:
                    i -= 1
                    j -= 1
                    lrbound[1] -= 1
                    shunxu = 2
            elif shunxu == 2:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    ans.append(matrix[j][i])
                    i -= 1
                else:
                    j -= 1
                    i += 1
                    udbound[1] -= 1
                    shunxu = 3
            else:
                while i >= lrbound[0] and i < lrbound[1] and j >= udbound[0] and j < udbound[1]:
                    ans.append(matrix[j][i])
                    j -= 1
                else:
                    i += 1
                    j += 1
                    lrbound[0] += 1
                    shunxu = 0
        return ans

```


