
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.EncodeAndDecodeStrings
{

public class Solution {
    // Encodes a list of strings to a single string.
    public string Encode(List<string> strs) {
        var sb = new StringBuilder();
        foreach (var str in strs) {
            foreach (var ch in str) {
                switch (ch) {
                case ',':
                    sb.Append(",!");
                    break;
                case '!':
                    sb.Append("!!");
                    break;
                default:
                    sb.Append(ch);
                    break;
                }
            }
            sb.Append(",");
        }
        return sb.ToString();
    }

    // Decodes a single string to a list of strings.
    public List<string> Decode(string s) {
        var result = new List<string>();
        var sb = new StringBuilder();
        char[] chArr = s.ToCharArray();
        for (int i = 0; i < chArr.Length; i++) {
            if (chArr[i] == ',') {
                int cursor = i + 1;
                while (cursor < chArr.Length && chArr[cursor] == '!') {
                    cursor++;
                }

                if ((cursor - i) % 2 == 1) {
                    result.Add(sb.ToString());
                    sb.Clear();
                } else {
                    sb.Append(',');
                    i++;
                }

                for (int j = i + 1; j < cursor; j += 2) {
                    sb.Append('!');
                }
                i = cursor - 1;
            } else if (chArr[i] == '!') {
                sb.Append('!');
                i++;
            } else {
                sb.Append(chArr[i]);
            }
        }
        return result;
    }
}

}