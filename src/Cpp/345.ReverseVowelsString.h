 
#ifndef __IS_POWER_OF_FOUR_H
#define __IS_POWER_OF_FOUR_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
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
    bool isVowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || \
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }

    string reverseVowels(string s) {   
        string chars = s;   
        stack<char> stack;
        auto n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (isVowel(s[i]) == true)
            {
                stack.push(chars[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (isVowel(s[i]) == true)
            {
                chars[i] = stack.top();
                stack.pop();
            }
        }
        return chars;
    }
};

#endif
