import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

    class Solution {
        public void merge(int[] nums1, int m, int[] nums2, int n) {
            int[] nums = new int[m];
            for(int i = 0;i < m;++i){
                nums[i] = nums1[i];
            }
            int i = 0;
            int j = 0;
            int index = 0;
            while (i < m || j < n) {
                if (i == m){
                    for (int k = j; k < n; ++k){
                        nums1[index] = nums2[k];
                        index += 1;
                    }
                    break;
                }
                if (j == n) {
                    for (int k = i; k < m; ++k) {
                        nums1[index] = nums[k];
                        index += 1;
                    }
                    break;
                }
                if (nums[i] < nums2[j]) {
                    nums1[index] = nums[i];
                    i += 1;
                    
                } else {
                    nums1[index] = nums2[j];
                    j += 1;
                }
                index += 1;
                
            }
        }
    }

