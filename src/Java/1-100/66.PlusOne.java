import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

    class Solution {
        public int[] plusOne(int[] digits) {
            int n = digits.length;
            int i = n - 1;
            int c = 1;
            while (i >= 0)
            {
                int digit = digits[i];
                digit += c;
                digits[i] = digit % 10;
                c = digit / 10;
                --i;
                if (c == 0)
                    break;
            }
            if (c == 1)
            {
                int[] nums = new int[n + 1];
                nums[0] = c;
                for(int j = 0;j < n;++j){
                    nums[j + 1] = digits[j];
                }
                return nums;
            }
            return digits;
        }
    }
