
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.ConstructRectangle
{
public class Solution 
{
    public int[] ConstructRectangle(int area) 
    {
        for (int i = (int)Math.Sqrt(area); i > 0; i--) 
        {
            if (area % i == 0)
                return new int[]{area / i, i};
        }
        return new int[]{area, 1};
    }
}

}
