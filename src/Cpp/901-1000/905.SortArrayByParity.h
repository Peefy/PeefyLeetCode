
#ifndef __SORT_ARRAY_BY_PARITY_H
#define __SORT_ARRAY_BY_PARITY_H

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
    vector<int> sortArrayByParity(vector<int>& A) {
        int left = 0;
        int right = A.size() - 1;
        while (left < right){
            if (A[left] % 2 == 0)
                left += 1;
            else {
                if (A[right] % 2 == 0)
                    swap(A[left], A[right]);        
                right -= 1;
            }
        }
        return A;
    }
};

#endif

