
#ifndef __PALI_NUM_H
#define __PALI_NUM_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        vector<int> bit;
        auto pre = x;
        while(x > 0)
        {
            auto cur = x % 10;
            bit.push_back(cur);
            x = x / 10;
        }
        auto sum = 0;
        for(auto b : bit)
        {
            sum = sum * 10 + b; 
        }
        if(sum == pre)
        {
            return true;
        }
        return false;
    }
};

#endif
