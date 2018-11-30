
#ifndef __REPEATED_STRING_MATCH_H
#define __REPEATED_STRING_MATCH_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>
#include <numeric>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        int lenA = A.length();
        int lenB = B.length();
        int indexA = 0;
        int indexB = 0; 
        while(indexB < lenB) { 
            if(lenA < lenB && indexA >= 2 * lenB) {
                return -1;
            }
            
            if(lenA >= lenB && indexA >= 2 * lenA) {
                return -1;
            }
            
            if(A[indexA % lenA] == B[indexB]) {
                indexA++;
                indexB++;
            } else if(indexB == 0){
                indexA++; 
            } else {
                int i = indexA + 1;
                for(; i < indexA + 1 + lenB; i++) {
                    if(A[i % lenA] == B[indexB]) {
                        break;
                    }
                }
                if(i == indexA +1 + lenB) return -1; 
                indexA = i - indexB;
                indexB = 0;
            } 
        }
        return (indexA - 1) / lenA + 1;
    }
};

#endif
