using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.RotatedDigits
{
public class Solution {
    int[] change = {0 , 0 , 1 , -1 , -1 , 1 , 1 , -1 , 0 , 1};
    
    bool ifGood(int n){
        bool result = false;
        while(n != 0){
            if(change[n%10] == -1)
                return false;
            else if(change[n%10] == 1){
                result = true;
            }
            n /= 10;
        }
        return result;
    }
    public int RotatedDigits(int N) {
        int cnt = 0;
        for(int i = 1 ; i <= N ; ++i){
           if(ifGood(i))
               ++cnt;
        }
        return cnt;
    }
}
}

