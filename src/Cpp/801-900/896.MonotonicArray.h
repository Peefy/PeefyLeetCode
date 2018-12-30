
#ifndef __MONOTONIC_ARRAY_H
#define __MONOTONIC_ARRAY_H

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
    bool isMonotonic(vector<int>& A) {
        int first = 0;
        int last = A.size() - 1;
        bool Not_found = true;
        if (last <= 1)
            return true;
        else if (A[0] < A[last]){
            while (first < last && Not_found){
                if (A[first] <= A[first+1] && A[last] >= A[last-1]){
                    first += 1;
                    last -= 1;
                }
                else
                    Not_found = false;
            }
            return Not_found;
        }
        else if (A[0] > A[last]){
            while (first < last && Not_found){
                if (A[first] >= A[first+1] && A[last] <= A[last-1]){
                    first += 1;
                    last -= 1;
                }
                else
                    Not_found = false;
            }
            return Not_found;
        }
        else{
            bool result = true;
            for(int i = 1; i < A.size(); i++){
                if (A[i]!=A[0]){
                    result = false;
                    break;
                }
            }   
            return result;
        }
    }
};

#endif
