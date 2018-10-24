
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.LicenseKeyFormatting
{
public class Solution {
    public string LicenseKeyFormatting(string S, int K) {
        var n = S.Length;
        var count = 0;
        var chars = new List<char>();
        for(int i = 0; i < n; i++)
        {
            var j = n - i - 1;
            if (S[j] == '-')
                continue;
            if (S[j] >= 'a' && S[j] <= 'z')
                chars.Add((char)(S[j] - 'a' + 'A'));
            else
                chars.Add(S[j]);
            count++;
            if (count % K == 0)
                chars.Add('-');
        }
        var size = chars.Count;
        if (size > 0 && chars.Last() == '-')
            chars.RemoveAt(size - 1);
        chars.Reverse();
        return new string(chars.ToArray());
    }
}

}
