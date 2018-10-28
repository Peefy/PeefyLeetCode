
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.NumberToHex {
public class Solution {
    string mod16(long x){
        long ans = x % 16;
        if (ans == 10)
            return "a";
        else if (ans == 11)
            return "b";
        else if (ans == 12)
            return "c";
        else if (ans == 13)
            return "d";
        else if (ans == 14)
            return "e";
        else if (ans == 15)
            return "f";
        else
            return ans.ToString();
    }

	public string ToHex(int num) {
        long long_num = num; 
        String result = "";
        if (long_num == 0)
            return "0";
        if (long_num < 0)
            long_num += (long)Math.Pow(2, 32);
        while (long_num > 0){
            result = mod16(long_num) + result;
            long_num /= 16;
        }
        return result;
	}
}
}

