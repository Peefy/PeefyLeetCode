namespace PeefyLeetCode.MaxSubArray
{
    public class Solution
    {
        public int MaxSubArray(int[] nums)
        {
            var sum = 0;
            var max = int.MinValue;
            for (var i = 0; i < nums.Length; ++i)
            {
                if (sum < 0)
                    sum = 0;
                sum += nums[i];
                if (sum > max)
                    max = sum;
            }
            return max;
        }
    }
}