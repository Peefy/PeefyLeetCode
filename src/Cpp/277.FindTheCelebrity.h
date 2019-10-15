
#ifndef __FIND_THE_CELEBRITY_H
#define __FIND_THE_CELEBRITY_H

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


class Relation {
public:
    bool knows(int candidate1, int candidate2) {
        return false;
    }
};

class Solution : public Relation {
public:
    int findCelebrity(int n) {
        int candidate = 0;
        for (int i = 1; i < n; i++) {
            if (knows(candidate, i))
                candidate = i;
        }
        for (int i = 0; i < n; i++) {
            if (i == candidate) 
                continue;
            if (!knows(i, candidate) || knows(candidate, i))
                return -1;
        }

        return candidate;
    }
};


#endif
