
#ifndef __FIND_LHS_H
#define __FIND_LHS_H

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
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> hash;
        int count = 0;
        for (auto num : nums)      
            hash[num]++;  
        for (auto v : hash)
            if (hash.find(v.first - 1) != hash.end()) 
                count = max(count, hash[v.first - 1] + hash[v.first]);
        return count;
    }
};

#endif
