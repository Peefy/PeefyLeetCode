 
#ifndef __STRING_IS_ISOMORPHIC_H
#define __STRING_IS_ISOMORPHIC_H

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
    bool isIsomorphic(string s, string t) {
        map<char, char> d;
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            if (d.find(s[i]) == d.end())
            {
                for(auto it = d.begin();it != d.end();++it)
                {
                    if ((*it).second == t[i])
                        return false;
                }
                d[s[i]] = t[i];
            }
            else if (d[s[i]] != t[i])
                return false;
        }
        return true;
    }
};

#endif
