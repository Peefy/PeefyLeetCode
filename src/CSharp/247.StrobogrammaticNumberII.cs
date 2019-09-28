
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.StrobogrammaticNumberII
{

public class Solution {
    public List<string> FindStrobogrammatic(int n) {
        var diffMap = new Dictionary<char, char>();
        char[] selfArr = new char[] { '0', '1', '8' };
        diffMap.Add('6', '9');
        diffMap.Add('9', '6');
        List<string> result = new List<string>();
        buildResult(0, n, new char[n], selfArr, diffMap, result);
        return result;
    }

    private void buildResult(int curPos, int n, char[] cache, char[] selfArr, Dictionary<char, char> diffMap, List<string> result) {
        if (curPos < (n + 1) / 2) {
            foreach (char c in selfArr) {
                if (curPos == 0 && c == '0' && n != 1)
                    continue;
                cache[curPos] = cache[n - 1 - curPos] = c;
                buildResult(curPos + 1, n, cache, selfArr, diffMap, result);
            }
            if (n % 2 == 0 || curPos != n / 2) {
                foreach (char c in diffMap.Keys) {
                    cache[curPos] = c;
                    cache[n - 1 - curPos] = diffMap[c];
                    buildResult(curPos + 1, n, cache, selfArr, diffMap, result);
                }
            }
        } else if (n != 0) {
            result.Add(new string(cache));
        }
    }
} 

}