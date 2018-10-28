
#ifndef __THIRD_MAX_NUMBER_H
#define __THIRD_MAX_NUMBER_H

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

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long longmin = -0xFFFFFFFFF;
        long first = longmin;
		long secend = longmin;
		long third = longmin;
		for (int i = 0; i < nums.size(); i++) {
			long temp = nums[i];
			if (temp >= first) {
				if (temp != first) {
					third = secend;
					secend = first;
					first = temp;
				}
			} else if (temp >= secend) {
				if (temp != secend) {
					third = secend;
					secend = temp;
				}
			} else if (temp >= third) {
				third = temp;
			}
		}
		if (third == longmin)
			return (int) first;
		return (int) third;
    }
};

#endif
