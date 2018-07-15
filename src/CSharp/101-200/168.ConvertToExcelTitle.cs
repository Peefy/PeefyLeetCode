namespace PeefyLeetCode.ConvertToExcelTitle
{
public class Solution
    {
        public string ConvertToTitle(int n)
        {
            string r = "";
            while (n != 0)
            {
                --n;
                r = (char)((n % 26) + 'A') + r;
                n /= 26;
            }
            return r;
        }
    }
}