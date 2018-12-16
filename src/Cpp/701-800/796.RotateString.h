
#ifndef __ROTEATED_STRING_H
#define __ROTEATED_STRING_H

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
#include <csrting>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool rotateString(string A, string B) {
        int nA = A.length();
        int nB = B.length();
        if (nA != nB)
            return false;
        if (A == "")
            return true;
        for (int i = 0; i < nA; i++) {
            A = A.substr(1) + A[0];
            if (A == B)
                return true;
        }
        return false;
    }
};

#endif
