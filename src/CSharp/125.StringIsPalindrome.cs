using System.Text.RegularExpressions;

namespace PeefyLeetCode.StringIsPalindrome
{
    public class Solution
    {
        public bool IsPalindrome(string s)
        {
            if (s == null)
                return false;
            if (s == "")
                return true;
            s = Regex.Replace(s, "[^0-9a-zA-Z]", "");
            s = s.ToLower();
            int n = s.Length;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != s[n - i - 1])
                    return false;
            }
            return true;
        }
    }
}