
#ifndef __TRIANGLE_MIN_PATH_H
#define __TRIANGLE_MIN_PATH_H

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
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        if (n == 0)
            return 0;
        auto res = *triangle.end();
        for (int i = n - 2; i > -1; i--) {
            int ni = triangle[i].size();
            for (int j = 0; j < ni; j++) {
                res[j] = min(res[j], res[j + 1]) + triangle[i][j];
            }
        }            
        return res[0];
    }
};

#endif
