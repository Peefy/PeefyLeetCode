
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.RepeatedDNASequences
{
public class Solution {
    public IList<string> FindRepeatedDnaSequences(string s) {
        var result = new HashSet<string>();
            if (s.Length <= 10) return new List<string>(result);
            var seqs = new HashSet<string>();
            for (var i = 0; i + 10 <= s.Length; ++i)
            {
                var cur_seq = s.Substring(i, 10);
                if (seqs.Contains(cur_seq)) result.Add(cur_seq);
                seqs.Add(cur_seq);
            }
            return new List<string>(result);
    }
}

}



