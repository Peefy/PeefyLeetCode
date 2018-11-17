
#ifndef __PERFECT_NUMBER_H
#define __PERFECT_NUMBER_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>

using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) {
            return false;
        }
        int up = (int)sqrt(num) + 1;
        int sum = 1;
        for (int i = 2; i < up; i++) {
            if (num % i == 0) {
                sum += i;
                if (num / i != i) {
                    sum += num / i;
                }
            }
        }
        return sum == num;
    }
};

#endif
