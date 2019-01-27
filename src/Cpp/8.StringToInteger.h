
#ifndef __STRING_TO_INTEGER_H
#define __STRING_TO_INTEGER_H

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

class Solution {
public:
    int myAtoi(string str) {
        int nonindex = -1;
        uint64_t strNum = 0;
        for(int i = 0; i < str.length(); i++){
            if (str[i] != ' '){
                nonindex = i;
                break;
            }
        }       
        if (nonindex == -1)
            return 0;
        bool positive = true;
        char firstchar = str[nonindex];
        int i = nonindex;
        if (firstchar == '+' || firstchar == '-'){
            if (firstchar == '-')
                positive = false;
            i = 1 + nonindex;
        }
        for (; i < str.length(); i++) {
            char c = str[i];
            if (c >= '0' && c <= '9')
                strNum = strNum * 10 + c - '0';        
            if (c < '0' || c > '9')
                break;       
            if (strNum > 2147483647){
                if (positive == false)
                    return -2147483648;
                else
                    return 2147483647;
            }
        }
        if (positive == false)
            strNum = 0 - strNum;
        return (int)strNum;
    }
};

#endif
