
#ifndef __LONGEST_PALINDROME_H
#define __LONGEST_PALINDROME_H

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
    vector<string> fizzBuzz(int n) {
        vector<string> r;
        for (int i = 1; i <= n; i++) {
            if (i % 15 == 0) {
                r.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                r.push_back("Fizz");
            } else if (i % 5 == 0) {
                r.push_back("Buzz");
            } else {
                r.push_back(to_string(i));
            }
        }
        return r;
    }
};

#endif
