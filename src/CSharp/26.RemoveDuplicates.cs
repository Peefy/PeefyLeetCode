namespace PeefyLeetCode.RemoveDuplicates
{
    public class Solution
    {
        public int RemoveDuplicates(int[] nums)
        {
            var size = nums.Length;
            if (size == 0)
            {
                return 0;
            }
            int first = 1, second = 1;
            int tmp = nums[0];
            while (second < size)
            {
                if (nums[second] != tmp)
                {
                    tmp = nums[second];
                    nums[first] = tmp;
                    first++;
                }
                second++;
            }
            return first;
        }
    }
}