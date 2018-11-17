
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.MatrixReshape
{
public class Solution {
    public int[,] MatrixReshape(int[,] nums, int r, int c) {
        int m = nums.GetLength(0);
        int n = nums.GetLength(1);
        if (r * c != n * m)
            return nums;
        var mat = new int[r, c];
		int hang = 0;
		int lie = 0;
		for(int a = 0; a < m; a++)          
			for(int b = 0; b < n; b++)
			{
				mat[hang, lie] = nums[a, b];
                lie++;
				if (lie == c)
				{
					hang++;
                    lie = 0;
				}
			}
		return mat;
    }
}
}

