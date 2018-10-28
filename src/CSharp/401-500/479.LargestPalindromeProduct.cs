
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.LargestPalindrome
{

public class Solution {
    public int LargestPalindrome(int n) {
        int upper = (int) (Math.Pow(10, n) - 1);
        int lower = upper / 10;
        for(int i = upper; i > lower; i--){
        	long front = i;
        	long reverse = 0;
        	long back = front;
        	while(back != 0){
        		long rem = back % 10;
        		reverse = reverse * 10 + rem;
        		front *= 10;
        		back /= 10;
        	}
        	// 构造回文
        	long p = front + reverse;
        	for(long j = upper; j * j > p; j--){
        		if(p % j == 0){
        			return (int) (p % 1337);
        		}
        	}
        }
    	return 9;
    }
}

}
