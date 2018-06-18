
namespace PeefyLeetCode.ReverseInteger
{
    public class Solution
    {
        public int Reverse(int x) 
        {
            var str = x.ToString();
            var n = str.Length;
            var restr = "";
            if(str[0] != '-')
            {
                for(var i = 0;i < n;++i)
                {
                    var j = n - i - 1;
                    restr += str[j];
                }
            }
            else
            {
                restr += "-";
                for(var i = 0;i < n - 1;++i)
                {
                    var j = n - i - 1;
                    restr += str[j];
                }
            }
            try 
            {
                return System.Convert.ToInt32(restr);
            }
            catch
            {
                return 0;
            }
        }
    }
}
