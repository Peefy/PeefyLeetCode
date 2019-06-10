
#ifndef __WORD_SEARCH_H
#define __WORD_SEARCH_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

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

#endif
