
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.AddStrings {
public class Solution {
    public string AddStrings(string num1, string num2) {
        var arr1 = num1.ToCharArray();
        var arr2 = num2.ToCharArray();
        var n1 = arr1.Length;
        var n2 = arr2.Length;
        var c = 0;
        var bit = 0;
        if (n1 > n2)
            return AddStrings(num2, num1);
        var sub = n2 - n1;
        char[] num = new char[n2];
        for (int i = 0; i < n1; i++)
        {
            int j = n1 - i - 1;
            bit = arr1[j] - '0' + arr2[j + sub] - '0' + c;
            if (bit >= 10)
            {
                c = 1;
                bit -= 10;
            }
            else
                c = 0;      
            num[n2 - 1 - i] = (char)(bit + '0');
        }
        for (int i = n1; i < n2; i++)
        {
            int j = n2 - i - 1;
            bit = arr2[j] - '0' + 0 + c;
            if (bit >= 10)
            {
                c = 1;
                bit -= 10;
            }
            else
                c = 0;      
            num[j] = (char)(bit + '0');
        }
        if (c == 1)
        {
            return "1" + new string(num);
        }
        return new string(num);
    }
}
}

