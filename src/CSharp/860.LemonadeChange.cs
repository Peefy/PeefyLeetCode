
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.LemonadeChange
{
public class Solution {
    public bool LemonadeChange(int[] bills) {
        int money5 = 0;
        int money10 = 0;
        foreach (var bill in bills){
            if (bill == 5)
                money5 += 1;
            else if (bill == 10){
                if (money5 == 0)
                    return false;
                money5 -= 1;
                money10 += 1;
            }
            else{
                if (money5 >= 1 && money10 >= 1){
                    money5 -= 1;
                    money10 -= 1;
                }
                else if (money5 >= 3)
                    money5 -= 3;
                else
                    return false;
            }
        }
        return true;
    }
}
}

