
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ThirdMax {
public class Solution {
    public int ThirdMax(int[] nums) {
        long first = long.MinValue;
		long secend = long.MinValue;
		long third = long.MinValue;
		for (int i = 0; i < nums.Length; i++) {
			long temp = nums[i];
			if (temp >= first) {
				if (temp != first) {
					third = secend;
					secend = first;
					first = temp;
				}
			} else if (temp >= secend) {
				if (temp != secend) {
					third = secend;
					secend = temp;
				}
			} else if (temp >= third) {
				third = temp;
			}
		}
		if (third == long.MinValue)
			return (int) first;
		return (int) third;
    }
}
}

