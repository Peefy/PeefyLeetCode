
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int peakIndexInMountainArray(int[] A) {
        int left = 0;
        int right = A.length;
        while (left < right){
            int mid = (left + right) / 2;
            if (A[mid] < A[mid + 1])  
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
}
