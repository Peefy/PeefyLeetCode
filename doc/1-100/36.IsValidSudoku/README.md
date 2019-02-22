
# Problem 36 : IsValidSudoku

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/36.IsValidSudoku/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> s;
        for(int i = 0; i < 9; i++){
            for (int j = 0;j < 9;++j){
                if (board[i][j] == '.')
                    continue;
                char rowtmp[10] = "";
                sprintf(rowtmp, "%d(%c)", i, board[i][j]);
                if (s.find(rowtmp) != s.end())
                    return false;
                s.insert(rowtmp);

                char coltmp[10] = "";
                sprintf(coltmp, "(%c)%d", board[i][j], j);
                if (s.find(coltmp) != s.end())
                    return false;
                s.insert(coltmp);

                char gridtmp[10] = "";
                int m = (i / 3) * 3; 
                int n = (j / 3) * 3;
                sprintf(gridtmp, "%d(%c)%d",m, board[i][j], n);
                if (s.find(gridtmp) != s.end())
                    return false;
                s.insert(gridtmp);

            }
        }
        return true;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public bool IsValidSudoku(char[,] board) {
        for (int i = 0; i < 9; i++) {
            int[] row = new int[9];
            int[] col = new int[9];
            int[] cube = new int[9];
            for (int j = 0; j < 9; j++) {
                if (board[i,j] != '.') {
                    if (row[board[i,j] - '1'] == 1) {
                        return false;
                    } else {
                        row[board[i,j] - '1'] = 1;
                    }
                }

                if (board[j,i] != '.') {
                    if (col[board[j,i] - '1'] == 1) {
                        return false;
                    } else {
                        col[board[j,i] - '1'] = 1;
                    }
                }
                // 每一宫内行列的变化
                int cubeX = 3 * (i / 3) + j / 3;
                int cubeY = 3 * (i % 3) + j % 3;
                if (board[cubeX,cubeY] != '.') {
                    if (cube[board[cubeX,cubeY] - '1'] == 1) {
                        return false;
                    } else {
                        cube[board[cubeX,cubeY] - '1'] = 1;
                    }
                }
            }
        }
        return true;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean isValidSudoku(char[][] board) {
        boolean flag=true;
        for(int i=0;i<9;i++){
            int[] a = new int[]{0,0,0,0,0,0,0,0,0,0};
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    if(a[board[i][j]-'0']==0)
                        a[board[i][j]-'0']=1;
                    else
                        flag=false; 
                }
            }
            if(flag==false)
               return flag;
        }   
        for(int i=0;i<9;i++){
            int[] a = new int[]{0,0,0,0,0,0,0,0,0,0};
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    if(a[board[j][i]-'0']==0)
                        a[board[j][i]-'0']=1;
                    else
                        flag=false; 
                }
            }
            if(flag==false)
               return flag;
        }     
        for(int i=0;i<7;i+=3){
            for(int j=0;j<7;j+=3){
                int[] a = new int[]{0,0,0,0,0,0,0,0,0,0};
                for(int p=i;p<i+3;p++){
                    for(int q=j;q<j+3;q++){
                        if(board[p][q]!='.'){
                    if(a[board[p][q]-'0']==0)
                        a[board[p][q]-'0']=1;
                    else
                        flag=false; 
                }
                    }
                }
            if(flag==false)
               return flag;
            }
        }      
        return flag; 
    }
}

```

## Python Solution

```python

class Solution:
    def isValidSudoku(self, board: 'List[List[str]]') -> 'bool':
        m = len(board)
        n = len(board[0])
        rowshash = []
        columnhash = []
        gridhash = []
        for i in range(m // 3):
            gridhash.append([])
            for j in range(n // 3):
                gridhash[i].append(set())
        for i in range(m):
            rowshash.append(set())
        for j in range(n):
            columnhash.append(set())
        for i in range(m):
            for j in range(n):
                if board[i][j] != '.':
                    if board[i][j] in gridhash[i // 3][j // 3]:
                        return False
                    else:
                        gridhash[i // 3][j // 3].add(board[i][j])
                    if board[i][j] in rowshash[i]:
                        return False
                    else:
                        rowshash[i].add(board[i][j])
                    if board[i][j] in columnhash[j]:
                        return False
                    else:
                        columnhash[j].add(board[i][j])
        return True

```


