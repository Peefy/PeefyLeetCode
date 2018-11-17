
#ifndef __REVERSE_STRING_II_H
#define __REVERSE_STRING_II_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 0;
        int n = s.length();
        while(i < n){
            i + k > n - 1 ? reverse(s.begin() + i, s.end()) : reverse(s.begin() + i, s.begin() + i + k - 1);
            i = i + 2 * k;
        }
        return s;
    }
};

#endif
