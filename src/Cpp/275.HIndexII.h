
#ifndef __H_INDEX_II_H
#define __H_INDEX_II_H

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
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        if (n == 0 || citations[n - 1] == 0)
            return 0;
        int left = 0;
        int right = n - 1;
        while (left < right) {
            int mid = (left + right) >> 1;
            if (citations[mid] < n - mid)
                left = mid + 1;
            else
                right = mid;
        }
        return n - left;
    }
};


#endif
