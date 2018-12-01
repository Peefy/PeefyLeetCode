
#ifndef __VALID_PALIDROME_II_H
#define __VALID_PALIDROME_II_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
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
    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (s[i] != s[j]) {
                break;
            }
            i++;
            j--;
        }
        while (i < j) {
            if (s[i + 1] != s[j] && s[i] != s[j - 1]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

#endif
