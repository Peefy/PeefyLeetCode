
#ifndef __TO_LOWER_CASE_H
#define __TO_LOWER_CASE_H

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string toLowerCase(string str) {
        int n = str.length();
        for(int i = 0; i < n; i++)
        {
             if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
        }
        return str;
    }
};


#endif
