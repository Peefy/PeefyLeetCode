
#ifndef __CONVERT_TO_EXCEL_TITLE_H
#define __TWO_SUM_II_H

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

class Solution
{
  public:
    string convertToTitle(int n)
    {
        auto JINZHI = 26;
        auto alpha = "0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string r = "";
        while(n > 0){
            int c = n / JINZHI;
            n = n % JINZHI;
            if (n != 0)
            {
                r = alpha[n] + r;
                n = c;
            }
            else
            {
                r = alpha[JINZHI] + r;
                n = c - 1;
            }
        }
        return r;
    }
};

#endif
