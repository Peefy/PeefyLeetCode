
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.FindWords
{
public class Solution 
{
    public string[] FindWords(string[] words) 
    {
        string firstLineLower = "qwertyuiop";
        string firstLineUpper = "QWERTYUIOP";
        string secondLineLower = "asdfghjkl";
        string secondLineUpper = "ASDFGHJKL";
        string thirdLineLower = "zxcvbnm";
        string thirdLineUpper = "ZXCVBNM";
        var r = new List<string>();
        foreach(string word in words)
        {
            int count = 0;
            int[] flag = new int[3]{0, 0 ,0};
            int length = word.Length;
            foreach (var letter in word)
            {
                if ((firstLineLower.IndexOf(letter) != -1) || 
                    (firstLineUpper.IndexOf(letter) != -1)){
                        if (flag[1] + flag[2] >= 1)
                            break;
                        flag[0] = 1;
                        count += 1;
                    }
                if ((secondLineLower.IndexOf(letter) != -1) || 
                    (secondLineUpper.IndexOf(letter) != -1)){
                        if (flag[0] + flag[2] >= 1)
                            break;
                        flag[1] = 1;
                        count += 1;
                    }
                if ((thirdLineLower.IndexOf(letter) != -1) || 
                    (thirdLineUpper.IndexOf(letter) != -1)){
                        if (flag[0] + flag[1] >= 1)
                            break;
                        flag[2] = 1;
                        count += 1;
                    }
            }
            if (count == length)
                r.Add(word);
        } 
        return r.ToArray();
    }
}

}
