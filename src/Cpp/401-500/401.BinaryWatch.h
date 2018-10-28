
#ifndef __BINARY_WATCH_H
#define __BINARY_WATCH_H

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
    vector<string> readBinaryWatch(int num) {//bitset STL模板
        vector<string> times;
        for (int i = 0; i < 12; i++) {
            bitset<4> h(i);//4位的二进制数
            for (int j = 0; j < 60; j++) {
                bitset<6> m(j);//6位的二进制数
                if (h.count() + m.count() == num)//h.count()函数判断h中1的个数
                    times.push_back(to_string(i) + (j < 10? ":0": ":") + to_string(j));
            }
        }
        return times;
    }
};

#endif
