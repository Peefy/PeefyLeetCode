
#ifndef __LARGEST_NUMBER_H
#define __LARGEST_NUMBER_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;


class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            auto aa = to_string(a);
            auto bb = to_string(b);
            return aa + bb > bb + aa;
        });
        
        return accumulate(nums.begin(), nums.end(), string(), [](std::string a, int b) {
            if (a == "0") {
                return to_string(b);
            }
            return std::move(a) + to_string(b);
        });
    }
};

#endif
