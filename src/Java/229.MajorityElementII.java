
import java.util.List;
import java.util.TreeSet;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;


class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int major1 = 0;
        int cnt1 = 0;
        int major2 = 0;
        int cnt2 = 0;
        int n = nums.length;
        for (int i = 0; i < n; i++){
            if (cnt1 == 0 && major2 != nums[i]){
                major1 = nums[i];
                cnt1 = 1;
            }
            else if (cnt2 == 0 && major1 != nums[i]){
                major2 = nums[i];
                cnt2 = 1;
            }
            else if (major1 == nums[i])
                cnt1 += 1;
            else if (major2 == nums[i])
                cnt2 += 1;
            else{
                cnt1 -= 1;
                cnt2 -= 1;
            }
        }           
        cnt1 = 0;
        cnt2 = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] == major1)
                cnt1 += 1;
            else if (nums[i] == major2)
                cnt2 += 1;
        }
        List<Integer> ans = new ArrayList<>();
        if (cnt1 > n / 3)
            ans.add(major1);
        if (cnt2 > n / 3)
            ans.add(major2);
        return ans;
    }
}


