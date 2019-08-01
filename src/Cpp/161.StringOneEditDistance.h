
#ifndef __STRING_ONE_EDIT_DISTANCE_H
#ifndef __STRING_ONE_EDIT_DISTANCE_H

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
    bool isOneEditDistance(string s, string t) {
        if (s == nullptr && t == nullptr) 
            return false;
        if (s == nullptr) return t.length() == 1;
        if (t == nullptr) return s.length() == 1;
        if (s.length() < t.length()) {
            string temp = s;
            s = t;
            t = temp;
        }
        if (s.length() == 1 && t.length() == 0) return true;
        if (s.length() > t.length() + 1) return false;
        if (s.length() == t.length()) {
            int dist = 0;
            for(int i=0; i<s.length(); i++) {
                if (s[i] != t[i]) {
                    dist ++;
                    if (dist > 1) return false;
                }
            }
            return dist == 1;
        } else {
            int dist = 0;
            for(int i=0; i<t.length(); i++) {
                if (t[i] == s[i+dist]) continue;
                dist ++;
                if (dist > 1) return false;
                if (t[i] == s[i+dist]) continue;
                return false;
            }
            return dist <= 1;
        }
    }
};


#endif
