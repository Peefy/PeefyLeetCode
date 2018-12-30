
#ifndef __LEMONADE_CHANGE_H
#define __LEMONADE_CHANGE_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string.h>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int money5 = 0;
        int money10 = 0;
        for (auto bill : bills){
            if (bill == 5)
                money5 += 1;
            else if (bill == 10){
                if (money5 == 0)
                    return false;
                money5 -= 1;
                money10 += 1;
            }
            else{
                if (money5 >= 1 && money10 >= 1){
                    money5 -= 1;
                    money10 -= 1;
                }
                else if (money5 >= 3)
                    money5 -= 3;
                else
                    return false;
            }
        }
        return true;
    }
};

#endif

