
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.NumSpecialEquivGroups
{
public class Solution {
    public int NumSpecialEquivGroups(string[] A) {
        HashSet<string> hash = new HashSet<string>();
		foreach(var ch in A){
		    int len2 = ch.Length / 2;
		    int len1 = ch.Length - len2;
            char[] ch1 = new char[len1];
            char[] ch2 = new char[len2];
		    for (int i = 0; i + i < ch.Length; i++)
			    ch1[i] = ch[i + i];
		    for (int i = 0; i + i + 1 < ch.Length; i++)
			    ch2[i] = ch[i + i + 1];
		    Array.Sort(ch1);
            Array.Sort(ch2);
		    hash.Add(new string(ch1) + new string(ch2));
		}
		return hash.Count;
    }
}
}

