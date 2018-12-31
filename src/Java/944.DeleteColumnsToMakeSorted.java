
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;

class Solution {
    public int minDeletionSize(String[] A) {
        int m = A.length;
        int n = A[0].length();
        int count = 0;  
        for(int j = 0; j < n; j++){
            boolean flag = true;
            for(int i = 0; i < m - 1; i++){
                if (A[i].charAt(j) > A[i + 1].charAt(j)){
                    flag = false;
                    break;
                }
            }
            if (flag == true)
                count++;
        }
        return n - count;
    }
}
