
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.ReverseWordsInStringII
{
public class Solution {
    public string ReverseWords(String s) {
        return string.Join(' ', s.Split(' ').Reverse());
    }
}

}



