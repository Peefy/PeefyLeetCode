
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int m = matrix.length;
        if (m == 0){
            return false;
        }
        int n = matrix[0].length;
        int left = 0;
        int right = m * n - 1;
        while (left <= right){
            int middle = (left + right) / 2;
            int element = matrix[middle / n][middle % n];
            if (element == target)
                return true;
            else if (element < target)
                left = middle + 1;
            else if (element >target)
                right = middle - 1;
        }
        return false;
    }
}
