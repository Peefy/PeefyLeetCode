
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.BullsAndCows
{

public class Solution {
    public string GetHint(string secret, string guess) {
        StringBuilder sb = new StringBuilder();
		int a = 0, b = 0;
		int[] s = new int[10];
		int[] g = new int[10];
		for (int i = 0; i < secret.Length; i++) {
			s[secret[i] - '0']++;
			g[guess[i] - '0']++;
			a += secret[i] == guess[i] ? 1 : 0;
		}
		for (int i = 0; i < s.Length; i++) 
			b += Math.Min(s[i], g[i]);
		return sb.Append(a).Append("A").Append(b - a).Append("B").ToString();
    }
}

}