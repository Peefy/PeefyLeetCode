using System;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.MultiplyStrings
{
public class Solution {
    public string Multiply(string num1, string num2) {
        int len1 = num1.Length;
        int len2 = num2.Length;
        int k = len1 + len2 - 1;
        int cur=0, carry = 0;
        int[] tmp = new int[len1 + len2];
        StringBuilder res = new StringBuilder();
        for(int i=0;i<len1;i++){
            for(int j=0;j<len2;j++){
                tmp[k - i - j - 1] += (num1[i] - '0') * (num2[j] - '0'); 
            }
        }
        for(int i=0; i<k+1; i++){
            cur = (tmp[i] + carry)%10;
            carry = (tmp[i] + carry)/10;
            tmp[i] = cur;
        }
        int ii = k;
        while(ii >= 0 && tmp[ii] == 0) 
            ii--;
        if(ii<0) return "0";
        while(ii>=0) res.Append((char)(tmp[ii--]+'0'));
        return res.ToString();
    }
}
}