
#ifndef __PEAK_INDEX_IN_ARRAY_H
#define __PEAK_INDEX_IN_ARRAY_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string.h>
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
    int peakIndexInMountainArray(vector<int>& A) {
        int left = 0;
        int right = A.size();
        while (left < right){
            int mid = (left + right) / 2;
            if (A[mid] < A[mid + 1])  
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};

#endif

