
#ifndef __LONGEST_PALINDROME_H
#define __LONGEST_PALINDROME_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <stdint.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution {
public:
    int longestPalindrome(string s) {
        string cs = s;
        int counts[58] = {0};  
        for (auto c : cs) {
            counts[c - 'A'] ++;
        }   
        int res = 0;
        int add = 0;
        for (auto i : counts) {      
            res += i / 2 * 2;          
            if (i % 2 != 0) {
                add = 1;
            }
        }       
        return res + add;
    }
};

#endif
