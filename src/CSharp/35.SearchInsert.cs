namespace PeefyLeetCode.SearchInsert
{
    public class Solution
    {
        public int SearchInsert(int[] nums, int target)
        {
            var n = nums.Length;
            if (n == 0)
            {
                return 0;
            }
            var i = 0;
            var j = n - 1;
            var mid = 0;
            while (i <= j)
            {
                mid = (j + i) / 2;
                if (nums[mid] < target)
                    i = mid + 1;
                if (nums[mid] > target)
                    j = mid - 1;
                if (target == nums[mid])
                    return mid;
            }
            return i;
        }
    }
}