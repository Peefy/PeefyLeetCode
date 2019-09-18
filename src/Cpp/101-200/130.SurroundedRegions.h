
#ifndef __SURROUNDED_REGIONS_H
#define __SURROUNDED_REGIONS_H

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
    cin->tie(NULL);
    return 0;
}();


class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};


class Solution {
public:
    void dfs(int i, int j, int m, int n, vector<vector<char>>& board){
        if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != 'O')
            return;
        board[i][j] = '#';
        dfs(i - 1, j, m, n, board);
        dfs(i + 1, j, m, n, board);
        dfs(i, j - 1, m, n, board);
        dfs(i, j + 1, m, n, board);
    }
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        if (m == 0)
            return;
        int n = board[0].size();
        if (m < 3 || n < 3) 
            return;
        for (int i = 0; i < m; i++) {
            dfs(i, 0, m, n, board);
            dfs(i, n - 1, m, n, board);
        }
        for (int j = 0; j < n; j++) {
            dfs(0, j, m, n, board);
            dfs(m - 1, j, m, n, board);
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O')
                    board[i][j] = 'X';
                if (board[i][j] == '#')
                    board[i][j] = 'O';
            }
        }
    }
};

#endif
