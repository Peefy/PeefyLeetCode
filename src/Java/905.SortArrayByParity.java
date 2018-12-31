
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int[] sortArrayByParity(int[] A) {
        int left = 0;
        int right = A.length - 1;
        while (left < right){
            if (A[left] % 2 == 0)
                left += 1;
            else {
                if (A[right] % 2 == 0){
                    int temp = A[left];
                    A[left] = A[right];
                    A[right] = temp;
                }
                right -= 1;
            }
        }
        return A;
    }
}
