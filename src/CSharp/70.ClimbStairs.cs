namespace PeefyLeetCode.ClimbStairs
{
    public class Solution
    {
        public int ClimbStairs(int n)
        {
            if (n <= 2)
                return n;
            int a = 1, b = 2, i = 3;
            while (i <= n)
            {
                int sum = a + b;
                a = b;
                b = sum;
                ++i;
            }
            return b;
        }
    }
}