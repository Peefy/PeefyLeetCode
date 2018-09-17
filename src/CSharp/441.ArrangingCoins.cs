using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ArrangeCoins
{


public class Solution {
    public int ArrangeCoins(int n) {
            int left=0;
            int hight=n;
            while(left<hight) {
                if ((left * (left -1) / 2) == n) {
                    return left;
                }
                long  mid = left + (hight-left) / 2;
                if ((mid * (mid +1) / 2) == n) {
                    return (int)mid;
                }
                if ((mid * (mid+ 1) / 2) > n) {
                    hight=(int)(mid-1);
                }
                if ((mid * (mid +1) / 2) <n) {
                    left=(int)(mid+1);
                }
            }
            if((long)((long)left * ((long)left + 1) / 2) > (long)n){
                left--;
            }
            return left;
    }
}

}