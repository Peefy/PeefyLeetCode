
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
    public boolean isMonotonic(int[] A) {
        int first = 0;
        int last = A.length - 1;
        boolean Not_found = true;
        if (last <= 1)
            return true;
        else if (A[0] < A[last]){
            while (first < last && Not_found){
                if (A[first] <= A[first+1] && A[last] >= A[last-1]){
                    first += 1;
                    last -= 1;
                }
                else
                    Not_found = false;
            }
            return Not_found;
        }
        else if (A[0] > A[last]){
            while (first < last && Not_found){
                if (A[first] >= A[first+1] && A[last] <= A[last-1]){
                    first += 1;
                    last -= 1;
                }
                else
                    Not_found = false;
            }
            return Not_found;
        }
        else{
            boolean result = true;
            for(int i = 1; i < last + 1; i++){
                if (A[i]!=A[0]){
                    result = false;
                    break;
                }
            }   
            return result;
        }
    }
}
