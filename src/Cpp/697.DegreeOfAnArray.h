
#ifndef __DEGREE_OF_AN_ARRAY_H
#define __DEGREE_OF_AN_ARRAY_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>
#include <numeric>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, vector<int>> hash;
        for (int i = 0; i < nums.size(); i++) {
            if (hash.find(nums[i]) == hash.end()){
                hash[nums[i]] = vector<int>{1, i, i}; 
            }
            else{
                hash[nums[i]][0] += 1;
                hash[nums[i]][2] = i;
            }
        }
        int maxcount = 0;
        int minlength = 50000;
        for (auto h : hash){
            auto counts = h.second;
            int dis = counts[2] - counts[1] + 1;
            if (counts[0] > maxcount){
                maxcount = counts[0];
                minlength = dis;
            }
            else if (counts[0] == maxcount && dis < minlength)
                minlength = dis;
        }
        return minlength;
    }
};

#endif
