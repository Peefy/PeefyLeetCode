
#ifndef __CONVERT_TO_BASE7_H
#define __CONVERT_TO_BASE7_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>

using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        auto i = num;
        auto radix = 7;
        vector<char> buf(33);
        bool negative = (i < 0);
        int charPos = 32;
        if (!negative) {
            i = -i;
        }
        while (i <= -radix) {
            buf[charPos--] = -(i % radix) + '0';
            i = i / radix;
        }
        buf[charPos] = -i + '0';
        if (negative) {
            buf[--charPos] = '-';
        }
        return string(buf.begin() + charPos, buf.end());
    }
};

#endif
