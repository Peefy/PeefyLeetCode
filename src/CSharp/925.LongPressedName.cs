
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.IsLongPressedName
{
public class Solution {
    public bool IsLongPressedName(string name, string typed) {
        int i = 0;
        for(int j = 0; j < typed.Length; j++){
            if (i < name.Length && name[i] == typed[j])
                i += 1;
            else if (j == 0 || typed[j] != typed[j - 1])
                return false;
        }
        return i == name.Length;
    }
}
}

