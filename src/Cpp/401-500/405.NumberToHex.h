
#ifndef __NUMBER_TO_HEX_H
#define __NUMBER_TO_HEX_H

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
    string toHex(int num) {
        if(num==0) return "0";
        string result;
        string s="0123456789abcdef";
        int cnt=0;
        while(num!=0&&cnt<8){
            result=s[num&0xf]+result;
            num>>=4;
            cnt++;
        }
        return result;   
    }
};

#endif
