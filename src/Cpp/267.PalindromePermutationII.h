
#ifndef __GENERATE_PALINDROMES_II_H
#define __GENERATE_PALINDROMES_II_H

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
    vector<string> generatePalindromes(string s) {
        unordered_map<char,int> hash;
        for (auto c : s) 
            hash[c]++;
        vector<string> result;
        char center = '\0';
        for (auto x : hash) {
            if(x.second % 2 == 1) {
                if (center != '\0') 
                    return result;
                else 
                    center = x.first;
            }
        }
        string cur = "";
        if(center!='\0') 
        {
            hash[center]--;
            if(hash[center] == 0) hash.erase(center);
            cur.push_back(center);
        }
        permutate(cur, hash, result); 
        return result;
    }
    
    void permutate(string& cur, unordered_map<char, int>& hash, vector<string>& result) {
        if (hash.size() == 0) {
            result.push_back(cur);
            return;
        }
        for (auto x : hash) {
            string next = x.first + cur + x.first;
            hash[x.first] -= 2;
            if (hash[x.first] == 0) 
                temp.erase(x.first);
            permutate(next, hash, result);
            temp[x.first] += 2;
        }
    }
};


#endif
