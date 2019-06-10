
# Problem 79 : WordSearch

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/79.WordSearch/problem.png"/>

## C++ Solution

```c++

class Solution {
private:
    string word;
    int m =0,n = 0;
    int dir[4][2] = {-1,0,0,1,1,0,0,-1};
    int** vis = NULL;

public:
    bool exist(vector<vector<char>>& board, string word) {
        this->word = word;
        m = board.size();
        if(m==0)
            return false;
        n = board[0].size();
        vis = new int*[m];
        for(int i=0;i<m;i++){
            vis[i] = new int[n];
            memset(vis[i],0,sizeof(int)*n);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
                if(dfs(board,0,i,j))
                    return true;
        }
        return false;
    }

    bool dfs(vector<vector<char>>& board,int cur, int x,int y){
       if(!vis[x][y] && board[x][y]==word[cur]){
            vis[x][y] = 1;
            if(cur==word.size()-1)
                return true;    
            for (int i = 0; i < 4; i++){
                if(x + dir[i][0]<m && y + dir[i][1]<n && x + dir[i][0]>=0 && y + dir[i][1]>=0)
                    if(dfs(board,cur+1,x + dir[i][0],y + dir[i][1])) return true;
            }
            vis[x][y] = 0;
       }
       return false;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public bool Exist(char[][] board, string word)
        {
            int row = board.Length;
            int column = board[0].Length;
            char[] str = word.ToCharArray();
            bool[,] flag = new bool[row, column];
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    if (judge(board, i, j, row, column, flag, str, 0))
                        return true;
                }
            }
            return false;
        }

        public bool judge(char[][] board, int i, int j, int row, int column, bool[,] flag, char[] str, int k)
        {
            if (i < 0 || j < 0 || i >= row || j >= column || board[i][j] != str[k] || flag[i, j] == true)
                return false;
            if (k == str.Length - 1)
                return true;
            flag[i, j] = true;
            if (judge(board, i + 1, j, row, column, flag, str, k + 1) ||
              judge(board, i, j + 1, row, column, flag, str, k + 1) ||
              judge(board, i - 1, j, row, column, flag, str, k + 1) ||
              judge(board, i, j - 1, row, column, flag, str, k + 1))
            {
                return true;
            }
            flag[i, j] = false;
            return false;
        }
    }

```

## Java Solution

```java

class Solution {

    public boolean dfs(char[][] board, char[] word, Integer current, int i, int j){
        char tmp = board[i][j];
        board[i][j] = 0;
        current += 1;
        if (current == word.length)
            return true; 
        if (i > 0 && board[i-1][j] == word[current])
            if (dfs(board, word, current, i - 1, j))
                return true;
        if (j > 0 && board[i][j-1] == word[current])
            if (dfs(board, word, current, i, j - 1))
                return true;
        if (i < board.length - 1 && board[i+1][j] == word[current])
            if (dfs(board, word, current, i+1, j))
                return true;
        if (j < board[0].length - 1 && board[i][j+1] == word[current])
            if (dfs(board, word, current, i, j+1))
                return true;  
        board[i][j] = tmp;
        return false;
    }

    public boolean exist(char[][] board, String word) {
        if (board.length == 0)
            return false;
        int m = board.length;
        int n = board[0].length;
        HashMap<Character, Integer> need = new HashMap<>();
        char[] wordarr = word.toCharArray();
        for (char c : wordarr) {
            if (need.containsKey(c) == false)
                need.put(c, 1);
            else
                need.replace(c, need.getOrDefault(c, 0) + 1);
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (need.containsKey(board[i][j]) == true)
                need.replace(board[i][j], need.getOrDefault(board[i][j], 0) - 1);
            }
        }
        for (char c : need.keySet()) {
            if (need.get(c) > 0)
                return false;
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == wordarr[0]) {
                    int current = 0;
                    if (dfs(board, wordarr, current, i, j) == true)
                        return true;
                }
            }
        }
        return false;
    }
}

```

## Python Solution

```python

class Solution:
    def dfs(self, board, i, j, m, n, word, index, marked):
        if index >= len(word):
            return True
        if i < 0 or j < 0 or i >= m or j >= n:
            return False 
        if marked[i][j] == 1:
            return False
        addindex = 0
        if board[i][j] == word[index]:
            marked[i][j] = 1
            addindex = 1
        else:
            return False
        f1 = self.dfs(board, i - 1, j, m, n, word, index + addindex, marked)
        f2 = self.dfs(board, i + 1, j, m, n, word, index + addindex, marked)
        f3 = self.dfs(board, i, j - 1, m, n, word, index + addindex, marked)
        f4 = self.dfs(board, i, j + 1, m, n, word, index + addindex, marked)
        flag = f1 or f2 or f3 or f4
        if flag == False:
            marked[i][j] = False
        return flag

    def exist(self, board: list, word: str) -> bool:
        if word is None or board is None:
            return False
        m = len(board)
        n = len(board[0])
        for i in range(m):
            for j in range(n):
                if board[i][j] == word[0]:
                    marked = [ [0] * (n) for i in range(m)]
                    flag = self.dfs(board, i, j, m, n, word, 0, marked)
                    if flag == True:
                        return True
        return False

```


