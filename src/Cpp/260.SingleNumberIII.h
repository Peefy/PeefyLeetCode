
#ifndef __SINGLE_NUMBER_III_H
#define __SINGLE_NUMBER_III_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stdint.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;


static int x = []() {
    ios::sync_with_stdio(false);
    cin->tie(NULL);
    return 0;
}();



class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int sign = 0;
        //取得数组中两个唯一数的按位异或结果
        for (int i = 0; i < nums.size(); i++)
        {
            sign ^= nums[i];
        }
        //获取区分两个唯一数的比特位所代表的值
        //也可以写成：sign &= (~sign) + 1
        sign &= -sign;
        int n1 = 0, n2 = 0;
        //通过标识，区分两个数组
        for (int i = 0; i < nums.size(); i++)
        {
            if ((nums[i] & sign) == sign)
                n1 ^= nums[i];
            else
                n2 ^= nums[i]; ;
        }
        return { n1,n2 };
    }
};


#endif
