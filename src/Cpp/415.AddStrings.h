
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
    string addStrings(string num1, string num2) {
        int n1 = num1.length();
        int n2 = num2.length();
        int n = n1;
        int c = 0;
        string num = "";
        if (n1 < n2) {
            n = n2;
            for (int i = 0; i < n2 - n1; i++) {
                num1 = "0" + num1;
            }
        } else {
            n = n1;
            for (int i = 0; i < n1 - n2; i++) {
                num2 = "0" + num2;
            }
        }
        for (int i = 0; i < n; i++) {
            int j = n - 1 - i;
            int bit = num1[j] - '0' + num2[j] - '0' + c;
            if (bit >= 10) {
                c = 1;
                bit -= 10;
            } else {
                c = 0;
            }
            num = (char)(bit + '0') + num;
        }
        if (c == 1) {
            num = (char)(c + '0') + num;
        }
        return num;
    }
};

#endif
