
#ifndef __DISTRIBUTE_CANDIES_H
#define __DISTRIBUTE_CANDIES_H

#include <iostream>
#include <vector>
#include <map>
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
    int distributeCandies(vector<int>& candies) {
        int hash[200001] = {0};    
        int hashsize = 0;
        for (auto c : candies)
        {
            if (hash[c + 100000] == 0){
                hash[c + 100000] = 1;
                hashsize++;
            }
        }
        return min(hashsize, (int)candies.size() / 2);
    }
};

#endif
