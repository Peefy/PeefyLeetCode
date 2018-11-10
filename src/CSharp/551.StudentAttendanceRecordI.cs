using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.StudentAttendanceRecordI
{
public class Solution {
    public bool CheckRecord(string s) {
        int Acount = 0;
        int Lcount = 0;
        foreach (char c in s){
            Acount += c == 'A' ? 1 : 0;
            if (Acount >= 2)
                return false;
            Lcount = c == 'L' ? Lcount + 1 : 0; 
            if (Lcount >= 3)
                return false;
        }           
        return true;
    }
}
}