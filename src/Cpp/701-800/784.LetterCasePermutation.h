
#ifndef __LETTER_CASE_PERMUTATION_H
#define __LETTER_CASE_PERMUTATION_H

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

#define LOWER(x) (char)((x >='A' && x <='Z') ? x + 32 : x)
#define UPPER(x) (char)((x >='a' && x <='z') ? x - 32 : x)

class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> results;   
        results.push_back(""); 
        for (auto x : S){
            if ('0' <= x && x <= '9'){
                for (string& result : results)
                    result = result + x; 
            }
            else{
                vector<string> temp;
                for (string& result : results){
                    temp.push_back(result + LOWER(x));
                    temp.push_back(result + UPPER(x));
                }
                results = temp;
            }
        }
        return results;
    }
};

#endif
