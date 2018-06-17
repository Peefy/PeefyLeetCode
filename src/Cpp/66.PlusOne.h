
#ifndef __PLUS_ONE_H
#define __PLUS_ONE_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
  public:
    vector<int> plusOne(vector<int> &digits)
    {
        vector<int> num;
        int n = digits.size();
        int i = n - 1;
        int c = 1;       
        while(i >= 0){
            int digit = digits[i];
            digit += c;
            digits[i] = digit % 10;
            c = digit / 10;
            --i;
            num.insert(num.begin(), digits[i]);
        }
        if (c == 1)
            num.insert(num.begin(), c);
        return num;
    }
};

#endif
