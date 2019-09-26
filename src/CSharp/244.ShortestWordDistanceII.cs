
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ShortestWordDistanceII
{

public class WordDistance {
    public WordDistance(List<string> words) {
        for (int i = 0; i < words.Count; ++i) {
            m[words[i]].Add(i);
        }
    }
 
    int shortest(string word1, string word2) {
        int i = 0, j = 0, res = int.MaxValue;
        while (i < m[word1].Count && j < m[word2].Count) {
            res = Math.Min(res, Math.Abs(m[word1][i] - m[word2][j]));
            if (m[word1][i] < m[word2][j])
                ++i;
            else
                ++j;
        }
        return res;
    }
    Dictionary<string, List<int> > m;
}
}