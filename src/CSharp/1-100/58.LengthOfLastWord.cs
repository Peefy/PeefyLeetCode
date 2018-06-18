namespace PeefyLeetCode.LengthOfLastWord
{
    public class Solution
    {
        public int LengthOfLastWord(string s)
        {
            var n = s.Length;
            if (n == 0)
                return 0;
            var i = n - 1;
            var length = 0;
            while (i >= 0 && s[i] == ' ')
            {
                --i;
            }
            while (i >= 0)
            {
                if (s[i] != ' ')
                    ++length;
                else
                    break;
                --i;
            }
            return length;
        }
    }
}