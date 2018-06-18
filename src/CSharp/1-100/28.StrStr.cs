namespace PeefyLeetCode.StrStr
{
    public class Solution
    {
        public int StrStr(string haystack, string needle)
        {
            if(string.IsNullOrEmpty(needle) == true)
                return 0;
            var n1 = haystack.Length;
            var n2 = needle.Length;
            var max = n1 - n2;
            var first = needle[0];
            for(var i = 0; i < n1 ;++i)
            {
                if (haystack[i] != first)
                {
                    while (++i <= max && haystack[i] != first) ;
                }
                if (i <= max)
                {
                    int j = i + 1;
                    int end = j + n2 - 1;
                    for (int k = 1; j < end && haystack[j]
                            == needle[k]; j++, k++) ;
                    if (j == end)
                    {
                        return i;
                    }
                }
            }
            return -1;
        }
    }
}