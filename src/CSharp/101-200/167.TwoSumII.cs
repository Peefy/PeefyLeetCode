namespace PeefyLeetCode.TwoSumII
{
    public class Solution
    {
        public int[] TwoSum(int[] numbers, int target)
        {
            var left = 0;
            var right = numbers.Length;
            while (left < right)
            {
                if (numbers[left] + numbers[right] == target)
                    return new int[]{left + 1, right + 1};
                else if(numbers[left] + numbers[right] < target)
                    ++left;
                else if (numbers[left] + numbers[right] > target)
                    --right;
            }
            return null;
        }
    }
}