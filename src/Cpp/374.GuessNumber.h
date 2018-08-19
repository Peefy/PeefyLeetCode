
#ifndef __GUESS_NUMBER_H
#define __GUESS_NUMBER_H

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
    int guessNumber(int n) {
        int left = 1;
        int right = n;
        while (left <= right){
            int middle = left + (right - left) / 2;
            int num = middle;
            if (guess(num) == 0)
                return num;
            if (guess(num) == 1)
                left = middle + 1;
            if (guess(num) == -1)
                right = middle - 1;
        }
        return left;
    }
};

#endif
