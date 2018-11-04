
#ifndef __FIND_LUS_LENGTH_H
#define __FIND_LUS_LENGTH_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>

using namespace std;

class Solution {
public:
    int findLUSlength(string a, string b) {
        return a == b ? -1 : max(a.length(), b.length());
    }
};

#endif
