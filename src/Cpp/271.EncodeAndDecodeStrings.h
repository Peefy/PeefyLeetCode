
#ifndef __ENCODE_AND_DECODE_STRINGS_H
#define __ENCODE_AND_DECODE_STRINGS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stdint.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;


static int x = []() {
    ios::sync_with_stdio(false);
    cin->tie(NULL);
    return 0;
}();


class Solution {
public:
 
    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string result;
        for(auto str: strs) result += to_string((int)str.size())+"$"+str;   
        return result;
    }
 
    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> result;
        int len = s.size(), pos = 0;
        while(pos < len)
        {
            int k = s.find('$', pos), num = stoi(s.substr(pos, k-pos));
            result.push_back(s.substr(k+1, num));
            pos = k+num+1;
        }
        return result;
    }
};


#endif
