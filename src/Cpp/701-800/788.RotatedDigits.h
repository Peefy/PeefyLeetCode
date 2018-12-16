
#ifndef __ROTEATED_DIGITS_H
#define __ROTEATED_DIGITS_H

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
#include <csrting>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution{
  public:
    int rotatedDigits(int N){
        int res = 0;
        int* dp = new int[N + 1];
        memset(dp, 0, sizeof(int) * (N + 1));
        for (int i = 0; i <= N; i++){
            if (i < 10){
                if (i == 0 || i == 1 || i == 8){
                    dp[i] = 1;
                }
                else if (i == 2 || i == 5 || i == 6 || i == 9){
                    dp[i] = 2;
                    ++res;
                }
            }
            else{
                int a = dp[i / 10], b = dp[i % 10];
                if (a == 1 && b == 1){
                    dp[i] = 1;
                }
                else if (a >= 1 && b >= 1){
                    dp[i] = 2;
                    ++res;
                }
            }
        }
        return res;
    }
};

#endif
