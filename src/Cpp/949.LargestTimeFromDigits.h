
#ifndef __LARGEST_TIME_FROM_DIGITS_H
#define __LARGEST_TIME_FROM_DIGITS_H

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
#include <string.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        char maxtime[6] = ""; 
        char timechar[6] = "";
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                for(int k = 0; k < 4; k++){
                    if (i == j || i == k || k == j)
                        continue;
                    int h = A[i] * 10 + A[j];
                    int m = A[k] * 10 + A[6 - i - j - k];
                    if (0 <= h && h < 24 && 0 <= m && m < 60){     
                        sprintf(timechar, "%02d:%02d", h, m);
                        if (strcmp(timechar, maxtime) > 0){
                            memcpy(maxtime, timechar, sizeof(char) * 6);
                        }
                    }
                }
            }
        }
        return string(maxtime);
    }
};

#endif

