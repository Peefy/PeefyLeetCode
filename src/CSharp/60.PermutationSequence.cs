using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.GetPermutation
{
public class Solution {
    public int Factorial(int n){
        if(n == 0 || n == 1){
            return 1;
        }else{
            return n * Factorial(n-1);
        }
    }
    public string GetPermutation(int n, int k) {
        List<int> nums = new List<int>();
        for(int i = 0; i < n; i++){
            nums.Add(i + 1);
        }

        int fac_i = Factorial(n-1);
        k--;
        StringBuilder ret = new StringBuilder();
        for(int i = 1; i < n; i++){
            int index = k / fac_i;
            ret.Append(nums[index]);
            k = k % fac_i;
            nums.RemoveAt(index);
            fac_i = fac_i / (n-i);
        }
        ret.Append(nums[0]);
        return ret.ToString();
    }
}
}