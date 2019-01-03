
#ifndef __REVERSE_ONLY_LETTERS_H
#define __REVERSE_ONLY_LETTERS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    string reverseOnlyLetters(string S) {
        int left = 0;
        int right = S.length() - 1;
        while (left < right){
            while (left < right && isalpha(S[left]) == false)
                left += 1;
            while (left < right && isalpha(S[right]) == false) 
                right -= 1;
            if (left < right){
                swap(S[left], S[right]);
                left += 1;
                right -= 1;
            }
        }
        return S;
    }
};

#endif

