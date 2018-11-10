
#ifndef __REVERSE_STRING_IIi_H
#define __REVERSE_STRING_IIi_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        for (int i = 0; i < n; ++i)
        {
            if (s[i] != ' ')
            {
                int j = i;
                while (j + 1 < n && s[j + 1] != ' ') { j++; } 
                reverse(s, i, j);
                i = j;
            }
        }
        return s;
    }

    void reverse(string& w, int l, int r){
        while(l < r){
            char t = w[l];
            w[l] = w[r];
            w[r] = t;
            l++;
            r--;
        }
    }

};

#endif
