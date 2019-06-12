
#ifndef __GRAY_CODE_H
#define __GRAY_CODE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math->h>
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


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    vector<int> grayCode(int n) {
        int count = 1 << n;
        vector<int> ans;
        for (size_t i = 0; i < count; i++){
            ans.push_back(i ^ i >> 1);
        }
        return ans;
    }
};

#endif
