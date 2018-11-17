
#ifndef __RANGE_ADDITION_II_H
#define __RANGE_ADDITION_II_H

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
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int m = list1.size();
        int n = list2.size();
        int min = m + n;
        unordered_map<string, int> hash;
        vector<string> res;
        for (int i = 0; i < n; i++) {
            hash[list2[i]] = i;
        }
        for (int i = 0; i < m; i++) {
            if (hash.find(list1[i]) != hash.end()) {
                if (min > i + hash[list1[i]]) {
                    res.clear();
                    res.push_back(list1[i]);
                    min = i + hash[list1[i]];
                }
                else if(min == i + hash[list1[i]]){
                    res.push_back(list1[i]);
                }
            }
        }
        return res;
    }
};

#endif
