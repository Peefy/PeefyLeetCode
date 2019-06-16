
#ifndef __DIVIDE_TWO_INTEGERS_H
#define __DIVIDE_TWO_INTEGERS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution{
  public:
    int divide(int dividend, int divisor){
        if (divisor == 0)
            return 0;
        int max = INT32_MAX;
        int min = INT32_MIN;
        long divid = (long)dividend;
        long divi = (long)divisor;
        if (divi == 1)
            return (int)divid;
        if (divi == -1){
            if (divid <= min)
                return max;
            return (int)-divid;
        }
        bool flag = true;
        if (divid < 0){
            divid = -divid;
            if (divi < 0){
                divi = -divi;
            }
            else{
                flag = false;
            }
        }
        else if (divi < 0){
            divi = -divi;
            flag = false;
        }
        long res = 0;
        long tmp = 0;
        long cnt = 1;
        while (divi <= divid){
            cnt = 1;
            tmp = divi;
            //找到第一个大于被除数的2^n次方
            while (tmp <= divid){
                tmp <<= 1;
                cnt <<= 1;
            }
            res += (cnt >> 1);
            //减去基数的前一个数
            divid -= (tmp >> 1);
        }
        return flag ? (int)res : (int)-res;
    }
};

#endif
