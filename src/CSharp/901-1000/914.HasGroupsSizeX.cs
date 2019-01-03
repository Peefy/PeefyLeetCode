
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.HasGroupsSizeX
{
public class Solution {
    int gcd(int a, int b)
	{
		if (a % b == 0)
			return b;
		return gcd(b, a % b);
	}

    public bool HasGroupsSizeX(int[] deck) {
        Dictionary<int, int> dic = new Dictionary<int, int>();
        foreach (int d in deck){
            if (dic.ContainsKey(d) == false)
                dic.Add(d, 1);
            else
                dic[d]++;
        }
        var arr = dic.Values.ToArray();
        var min = arr[0];
        if (min < 2)
			return false;
        for (int i = 1; i < arr.Length; ++i)
		{
			min = gcd(min, arr[i]);
			if (min < 2)
				return false;
		}
		return true;
    }
}
}

