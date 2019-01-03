
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
    public boolean validMountainArray(int[] A) {
        int asc = 0; 
        int desc = 0;
        for(int i = 1; i < A.length; i++){
            if (A[i - 1] < A[i]){
                if (desc == 0)
                    asc += 1;
            }
            else if (A[i - 1] > A[i])
                desc += 1;
        }
        return asc > 0 && desc > 0 && asc + desc + 1 == A.length;
    }
}
