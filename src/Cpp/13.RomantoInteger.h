
#ifndef __ROMAN_TO_INT_H
#define __ROMAN_TO_INT_H

#include <string>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:

    int indexof(string s, char c){
        for(auto i = 0;i < s.length();++i){
            if(s[i] == c)
                return i;
        }
    }

    int romanToInt(string s) {
        string symbol = "IVXLCDM";
        vector<int> value{1, 5, 10, 50, 100, 500, 1000};
        auto count = s.length();
        auto sum = 0;
        auto j = 0;
        while(j < count - 1){
            auto b_val_index = indexof(symbol, s[j]);
            auto b_val = value[b_val_index];
            auto b_val_next_index = indexof(symbol, s[j + 1]);
            auto b_val_next = value[b_val_next_index];
            if(b_val_next <= b_val){
                sum += b_val;
                j += 1;
            }
            else{
                sum += b_val_next - b_val;
                j += 2;
            }
        }
        if(j >= count){
            return sum;
        }
        else{
            return sum + value[indexof(symbol, s[j])];
        }
    }
};

#endif

