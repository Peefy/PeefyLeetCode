
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
    public String largestTimeFromDigits(int[] A) {
        Arrays.sort(A); 
		int[] ind = {0, 1, 2, 3,
					 0, 1, 3, 2,
					 0, 2, 1, 3,
					 0, 2, 3, 1,
					 0, 3, 1, 2,
					 0, 3, 2, 1,
					 1, 0, 2, 3,
					 1, 0, 3, 2,
					 1, 2, 0, 3,
					 1, 2, 3, 0,
					 1, 3, 0, 2,
					 1, 3, 2, 0,
					 2, 0, 1, 3,
					 2, 0, 3, 1,
					 2, 1, 0, 3,
					 2, 1, 3, 0,
					 2, 3, 0, 1,
					 2, 3, 1, 0,
					 3, 0, 1, 2,
					 3, 0, 2, 1,
					 3, 1, 0, 2,
					 3, 1, 2, 0,
					 3, 2, 0, 1,
					 3, 2, 1, 0					 
					 };
		int i = 24 * 4 - 1 - 3; 
		while(i >= 0){
			int a = A[ind[i]], b = A[ind[i+1]], c = A[ind[i+2]], d = A[ind[i+3]];
			if(a * 10 + b <= 23 && c * 10 + d <= 59){
				return "" + a + b + ":" + c + d;
			}
			i -= 4;
		}
		return "";
    }
}
