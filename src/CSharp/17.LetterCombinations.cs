
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.LetterCombinations
{
public class Solution {

    private string[] maps = new string[]{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    public IList<string> LetterCombinations(string digits) {
        if (digits.Length == 0)
            return new List<string>();
        List<string> nowList = new List<string>();
        nowList.Add("");
        return recursive(digits, 0, nowList);
    }

    public List<String> recursive(String digits, int index, List<String> beforeList) {
        if (digits.Length == index)
            return beforeList;
        List<string> nowList = new List<string>();
        foreach (char c in maps[digits[index] - '0']){
            foreach (string str in beforeList){
                nowList.Add(str + c);
            }
        }
        return recursive(digits, index + 1, nowList);
    }

}
}
