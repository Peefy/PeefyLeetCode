
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.FizzBuzz {
public class Solution {
    public IList<string> FizzBuzz(int n) {
        var r = new List<string>();
        for (int i = 1; i <= n; i++) {
            if (i % 15 == 0) {
                r.Add("FizzBuzz");
            } else if (i % 3 == 0) {
                r.Add("Fizz");
            } else if (i % 5 == 0) {
                r.Add("Buzz");
            } else {
                r.Add(i.ToString());
            }
        }
        return r;
    }
}
}

