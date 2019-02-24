
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class Solution {
    public String multiply(String num1, String num2) {
        int len1 = num1.length();
        int len2 = num2.length();
        int k = len1 + len2 - 1;
        int cur=0, carry = 0;
        int[] tmp = new int[len1 + len2];
        StringBuffer res = new StringBuffer();
        for(int i=0;i<len1;i++){
            for(int j=0;j<len2;j++){
                tmp[k - i - j - 1] += (num1.charAt(i) - '0') * (num2.charAt(j) - '0'); 
            }
        }
        for(int i=0; i<k+1; i++){
            cur = (tmp[i] + carry)%10;
            carry = (tmp[i] + carry)/10;
            tmp[i] = cur;
        }
        int i = k;
        while(i >= 0 && tmp[i] == 0) 
            i--;
        if(i<0) return "0";
        while(i>=0) res.append((char)(tmp[i--]+'0'));
        return res.toString();
    }
}
