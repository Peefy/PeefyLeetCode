
#ifndef __FIRST_UNIQ_CHAR_H
#define __FIRST_UNIQ_CHAR_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <stdint.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); // cin与stdin禁止同步
    cin.tie(NULL);               //cin与cout解除绑定
    return 0;
}();

int guess(int num);

class Solution {
public:
    int firstUniqChar(string s) {
        int record[26] = {0};
        for (int i = 0;i < s.length();++i){
            record[s[i] - 'a']++;
        }
        for (int i = 0;i < s.length();++i){
            if(record[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};

#endif
