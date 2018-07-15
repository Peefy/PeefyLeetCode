
#ifndef __MAJORITY_ELEMENT_H
#define __MAJORITY_ELEMENT_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <stdint.h>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int result = nums[0], count = 0;
        for (int i = 0;i < nums.size();++i) {
            int num = nums[i];
            if (count == 0) {
                result = num;
                count++;
            } 
            else {
                if (result == num) {
                    count++;
                } 
                else {
                    count--;
                }
            }
        }
        return result;
    } 
};

#endif
