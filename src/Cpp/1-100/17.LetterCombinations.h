
#ifndef __LETTER_COMBINATIONS_H
#define __LETTER_COMBINATIONS_H

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

    string maps[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if (digits.length() == 0)
            return res;
        res.push_back("");
        return recursive(digits, 0, res);
    }

    vector<string> recursive(string digits, int index, vector<string>& before){
        if (index >= digits.length())
            return before;
        vector<string> temp;
        string chars = maps[(digits[index] - '0')];
        for (char c : chars){
            for (string& beforestring : before){
                temp.push_back(beforestring + c);
            }
        }
        return recursive(digits, index + 1, temp);
    }
};

#endif
