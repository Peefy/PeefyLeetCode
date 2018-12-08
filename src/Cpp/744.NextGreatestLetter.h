
#ifndef __NEXT_GREATER_LETTER_H
#define __NEXT_GREATER_LETTER_H

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

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        if (target >= letters[n - 1]) {
            return letters[0];
        }
        int l = 0;
        int r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (letters[mid] > target)
                r = mid - 1;
            else if(letters[mid] < target)
                l = mid + 1;
            else{
                while (letters[mid] == target)
                    mid += 1;
                return letters[mid];
            }
        }
        return letters[l];
    }
};

#endif
