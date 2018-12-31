
#ifndef __HAS_GROUP_X_H
#define __HAS_GROUP_X_H

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
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> dic;
        int minval = 10000;
        for (int d : deck){
            dic[d]++;
        }
        for (auto kv : dic){
            minval = min(minval, kv.second);
        }
        for (int i = 2; i <= minval; ++i){
            bool flag = true;
            for (auto kv : dic){
                if (kv.second % i != 0){
                    flag = false;
                    continue;
                }
            }
            if (flag == true)
                return true;
        }
        return false;
    }
};

#endif

