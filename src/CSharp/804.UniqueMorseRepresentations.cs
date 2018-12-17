
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.UniqueMorseRepresentations
{
public class Solution {
    public int UniqueMorseRepresentations(string[] words) {
        string[] morse = new string[]{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        HashSet<String> morsewords = new HashSet<string>();
        foreach (var word in words){
            string l = "";
            foreach (char c in word)
                l += morse[c - 'a'];
            if (morsewords.Contains(l) == false)
            {
                morsewords.Add(l);
            }        
        }
        return morsewords.Count;
    }
}
}

