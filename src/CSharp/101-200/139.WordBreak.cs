
using System;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.WordBreak
{
public class Solution {
    public bool WordBreak(string s, IList<string> wordDict) {
        HashSet<string> wordDictSet = new HashSet<string>(wordDict);
        bool[] dp = new bool[s.Length + 1];
        dp[0] = true;
        for (int i = 1; i <= s.Length; i++) {
            for (int j = 0; j < i; j++) {
                if (dp[j] && wordDictSet.Contains(s.Substring(j, i - j))) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[s.Length];
    }
}

}