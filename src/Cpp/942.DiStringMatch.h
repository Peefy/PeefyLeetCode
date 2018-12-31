
#ifndef __DI_STRING_MATCH_H
#define __DI_STRING_MATCH_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    vector<int> diStringMatch(string S) {
        int left = 0;
        int right = S.size();
        vector<int> r;
        for (char s : S){
            if (s == 'D'){
                r.push_back(right);
                right -= 1;
            }
            else{
                r.push_back(left);
                left += 1;
            }
        }
        r.push_back(left);
        return r;
    }
};

#endif

