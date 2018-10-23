
#ifndef __LARGEST_PALINDROME_PRODUCT_H
#define __LARGEST_PALINDROME_PRODUCT_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution {
public:
    int largestPalindrome(int n) {     
        if (n == 1) {
            return 9;
        }  
        if (n == 2) {
            return 987;
        }
        int upper = pow(10, n) - 1, lower = upper / 10;
        for(int i = upper; i > lower; i--) {
            string t = to_string(i);
            long p = stol(t + string(t.rbegin(), t.rend()));
            for(long j = upper; j * j > p; j--) {
                if(p % j == 0) {
                    return p % 1337;
                }
            }
        }
        return 9; 
    }
};

#endif


