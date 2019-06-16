
#ifndef __MULTIPLY_STRINGS_H
#define __MULTIPLY_STRINGS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string strnumadd(string num1, string num2){
        int len1 = num1.length();
        int len2 = num2.length();
        for(int i = 0; i < len1 - len2; i++){
            num2 = '0' + num2;
        }   
        int c = 0;
        string rstr = "";
        for(int i = 0; i < len1; i++){
            int j = len1 - 1 - i;
            int r = num1[j] - '0' + num2[j] - '0' + c;
            c = r / 10;
            rstr = (char)(r % 10 + '0') + rstr;
        }   
        if (c != 0)
            rstr = '1' + rstr;
        return rstr;
    }

    string multiply(string num1, string num2) {
        int len1 = num1.length();
        int len2 = num2.length();
        if (len1 < len2)
            return multiply(num2, num1);
        for(int i = 0; i < len1 - len2; i++){
            num2 = '0' + num2;
        }   
        int c = 0;
        string result = "0";
        for(int i = 0; i < len1; i++){
            int j = len1 - i - 1;
            int bit = num2[j] - '0';
            if (bit == 0)
                continue;
            int c = 0;
            string rstr = "";
            for(int k = 0; k < len1; k++){
                int q = len1 - k - 1;
                int r = (num1[q] - '0') * bit + c;
                c = r / 10;
                rstr = (char)(r % 10 + '0') + rstr;
            }
            if (c != 0)
                rstr = (char)(c + '0') + rstr;
            for (int ii = 0;ii < i;++ii)
                rstr += '0';
            result = strnumadd(rstr, result);
        }
        return result;
    }
};

#endif
