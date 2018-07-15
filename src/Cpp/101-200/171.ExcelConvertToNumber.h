
#ifndef __EXCEL_CONVERT_TO_NUMBER_H
#define __EXCEL_CONVERT_TO_NUMBER_H

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

class Solution {
public:
    int titleToNumber(string s) {
        auto n = s.size();   
        int sum = 0;   
        for(int i = 0; i < n; i++)
        {
            auto j = n - i - 1;
            sum += (s[j] - 'A' + 1) * pow(26, i);
        }
        return sum;
    }
};

#endif
