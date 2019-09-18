
#ifndef __REPEATED_DNA_SEQUENCES_H
#define __REPEATED_DNA_SEQUENCES_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class Solution{
public:
    int returnChar(char c){
        switch (c){
        case 'A':
            return 0;

        case 'C':
            return 1;

        case 'G':
            return 2;

        case 'T':
            return 3;
        }
        return 0;
    }
    vector<string> findRepeatedDnaSequences(string s){
        int n = s.length();
        vector<string> res;
        if (n <= 10)
            return res;
        bitset<1 << 20> S1;
        bitset<1 << 20> S2;
        int val = 0;
        for (int i = 0; i < 10; ++i)
            val = (val << 2) | returnChar(s[i]);
        S1.set(val);
        int mask = (1 << 20) - 1;
        for (int i = 10; i < n; ++i){
            val = ((val << 2) & mask) | returnChar(s[i]);
            if (S2[val])
                continue;
            if (S1[val]){
                res.push_back(s.substr(i - 9, 10));
                S2.set(val);
            }
            else{
                S1.set(val);
            }
        }
        return res;
    }
};

#endif
