
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;


class Solution {
    public int search(int[] nums, int target) {
        int length = nums.length;
        if (length == 0)
            return -1;
        int begin = 0;
        int end = length - 1;
        while (end > begin){
            if (end == begin + 1)
                break;
            int mid = (begin + end) / 2;
            if (nums[mid] > nums[begin])
                begin = mid;
            else
                end = mid;
        }
        if (nums[0] <= target && nums[begin] >= target){
            end = begin;
            begin = 0;
        }
        else if (nums[end] <= target && nums[length-1] >= target){
            begin = end;
            end = length-1;
        }
        else
            return -1;
        while (begin <= end){
            int mid = (begin + end) >> 1;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                end = mid - 1;
            else
                begin = mid + 1;
        }
        return -1;
    }
}
