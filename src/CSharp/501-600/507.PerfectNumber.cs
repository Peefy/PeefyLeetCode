using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.CheckPerfectNumber
{
public class Solution {
    public bool CheckPerfectNumber(int num) {
        if (num <= 1) {
            return false;
        }
        int up = (int)Math.Sqrt(num) + 1;
        int sum = 1;
        for (int i = 2; i < up; i++) {
            if (num % i == 0) {
                sum += i;
                if (num / i != i) {
                    sum += num / i;
                }
            }
        }
        return sum == num;
    }
}
}