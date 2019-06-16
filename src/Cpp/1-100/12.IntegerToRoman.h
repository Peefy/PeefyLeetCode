
#ifndef __INT_TO_ROMAN_H
#define __INT_TO_ROMAN_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    string intToRoman(int num) {
        string res = "";
        int tokenkey[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string tokenval[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for(int i = 0;i < 13;++i){
            auto n = tokenkey[i];
            auto t = tokenval[i];
            while (num >= n){
                res += t;
                num -= n;
            }
        }
        return res;
    }
};

#endif
