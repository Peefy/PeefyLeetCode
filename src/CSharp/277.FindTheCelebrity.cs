
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.FindTheCelebrity
{

public class Relation {
    public bool Knows(int candidate1, int candidate2) {
        return false;
    }
}

public class Solution : Relation {
    public int FindCelebrity(int n) {
        int candidate = 0;
        for (int i = 1; i < n; i++) {
            if (Knows(candidate, i))
                candidate = i;
        }
        for (int i = 0; i < n; i++) {
            if (i == candidate) 
                continue;
            if (!Knows(i, candidate) || Knows(candidate, i))
                return -1;
        }

        return candidate;
    }
}

}