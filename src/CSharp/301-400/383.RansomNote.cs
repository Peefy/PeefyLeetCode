
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.RansomNote
{
public class Solution {
    public bool CanConstruct(string ransomNote, string magazine) {
        int[] record = new int[26];
		foreach(var c in magazine.ToCharArray()){
			record[c - 'a']++;
		}
		foreach(var c in ransomNote.ToCharArray()){
			if(--record[c - 'a'] < 0) return false;
		}
		return true;
    }
}
}