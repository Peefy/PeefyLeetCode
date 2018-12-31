
#ifndef __SORT_ARRAY_BY_PARITY_II_H
#define __SORT_ARRAY_BY_PARITY_II_H

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
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> odd;
        vector<int> even;
        for (int a : A){
            if (a % 2 == 0)
                odd.push_back(a);
            else
                even.push_back(a);
        }
        for(int i = 0, j = 0; i < A.size(); i+=2,j++){
            A[i] = even[j];
        }
        for(int i = 0, j = 0; i < A.size(); i+=2,j++){
            A[i] = odd[j];
        }
        return A;
    }
};

#endif

