
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.LargestTimeFromDigits
{
public class Solution {
    public string LargestTimeFromDigits(int[] A) {
        string maxtime = ""; 
        string timechar = "";
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                for(int k = 0; k < 4; k++){
                    if (i == j || i == k || k == j)
                        continue;
                    int h = A[i] * 10 + A[j];
                    int m = A[k] * 10 + A[6 - i - j - k];
                    if (0 <= h && h < 24 && 0 <= m && m < 60){     
                        timechar = string.Format("{0:D2}:{1:D2}", h, m);
                        if (timechar.CompareTo(maxtime) > 0){
                            maxtime = timechar;
                        }
                    }
                }
            }
        }
        return maxtime;
    }
}
}

