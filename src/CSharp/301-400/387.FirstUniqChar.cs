
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.FirstUniqChar
{
class Solution {
    public int FirstUniqChar(String s) {
     int result = -1;
	        for(char c = 'a';c<='z';c++){
	            int index = s.IndexOf(c);
	            if(index != -1 && index == s.LastIndexOf(c)){
	                result = result != -1?Math.Min(result,index):index;
	            }
	        }
	        return result;
    }
}
}