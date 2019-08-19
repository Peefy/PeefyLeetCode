
#ifndef __REVERSE_WORDS_IN_STRING_H
#ifndef __REVERSE_WORDS_IN_STRING_H

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


class Solution {
public:
    void reverseWords(string &s) {
        int length = s.length();
        if (length == 0) {
            return;
        }
        reverseWords(s, 0, length - 1);
        int start = 0, end = 0;
        while (start < length) {
            end = start;
            while (end + 1 < length && s[end + 1] != ' ') {
                ++end;
            }
            reverseWords(s, start, end);
            start = end + 2;
        }
    }
private:
    void reverseWords(string &s, int start, int end) {
        while (start < end) {
            char c = s[start];
            s[start] = s[end];
            s[end] = c;
            ++start, --end;
        }
    }
};


#endif
