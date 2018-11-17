
#ifndef __DETECT_CAPITAL_USE_H
#define __DETECT_CAPITAL_USE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        int count = 0;
        for (auto c : word)
        {
            if (c >= 'A' && c <= 'Z')
                count++;
        }      
        if (count == 0 || count == n)
            return true;
        if (count == 1 && (word[0] >= 'A' && word[0] < 'Z'))
            return true;
        return false;    
    }
};

#endif
