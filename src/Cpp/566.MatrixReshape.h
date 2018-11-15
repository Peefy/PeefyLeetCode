
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
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size();
        int n = nums[0].size();
        if (r * c != n * m)
            return nums;
        vector<vector<int>> mat(r, vector<int>(c));
		int hang = 0;
		int lie = 0;
		for(int a = 0; a < m; a++)          
			for(int b = 0; b < n; b++)
			{
				mat[hang][lie] = nums[a][b];
                lie++;
				if (lie == c)
				{
					hang++;
                    lie = 0;
				}
			}
		return mat;
    }
};

#endif
