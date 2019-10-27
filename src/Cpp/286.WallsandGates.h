
#ifndef __WALLS_AND_GATES_H
#define __WALLS_AND_GATES_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stdint.h>
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


class Solution {
public:
    void wallsAndGates(vector<vector<int>>& rooms) {
        if (rooms.size() == 0 || rooms[0].size() == 0)
            return;
        int m = rooms.size();
        int n = rooms[0].size();

        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (rooms[i][j] == INT32_MAX) {
                    rooms[i][j] = search(rooms, visited, i, j, m, n);
                }
            }
        }
        return;
    }

    int search(vector<vector<int>>& rooms, vector<vector<bool>>& visited, int i, int j, int m, int n) {
        if (i < 0 || i > m - 1 || j < 0 || j > n - 1 || rooms[i][j] == -1)
            return INT32_MAX;
        if (rooms[i][j] == 0)
            return 0;
        if (visited[i][j])
            return rooms[i][j];
        visited[i][j] = true;

        if (rooms[i][j] > 0 && rooms[i][j] < INT32_MAX)
            return rooms[i][j];

        int up = search(rooms, visited, i - 1, j, m, n);
        int down = search(rooms, visited, i + 1, j, m, n);
        int left = search(rooms, visited, i, j - 1, m, n);
        int right = search(rooms, visited, i, j + 1, m, n);

        visited[i][j] = false;

        int val = min(min(up, down), min(left, right));
        return val == INT32_MAX ? val : val + 1;
    }
};

#endif
