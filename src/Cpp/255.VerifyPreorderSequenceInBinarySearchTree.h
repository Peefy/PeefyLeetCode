
#ifndef __VERIFY_PREORDER_SEQUEMCE_IN_BST_H
#define __VERIFY_PREORDER_SEQUEMCE_IN_BST_H

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
    bool verifyPreorde(vector<int> nums) {
        int min = INT64_MIN;
        stack <int> stack;
        for (int num : nums) {
            if (num < min) {
                return false;
            }
            while(!stack.empty() && num > stack.top(){
                min = stack.top();
                stack.pop();
            }
            stack.push(num);
        }
        return true;
    }
};


#endif
