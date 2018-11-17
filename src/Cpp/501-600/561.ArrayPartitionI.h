
#ifndef __ARRAY_PARTITION_I_H
#define __ARRAY_PARTITION_I_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <algorithm>

using namespace std;

static int pr = []() { 
    std::ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    return 0; 
}();

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int array[20001] = {0}; 
        for(auto num : nums)
        {
            array[num + 10000]++;
        }
        int value = 0;
	    int flag = 1;     
	    for(int i = 0 ; i < 20001 ;i ++){
	        while(array[i] != 0){
	            if(flag % 2 == 1){  
	                value = value + (i - 10000);
	            }
	            flag++;
	            array[i]--;
	        }        
	    }  
	    return value;
    }
};

#endif
