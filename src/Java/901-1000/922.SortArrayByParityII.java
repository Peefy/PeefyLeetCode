
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
    public int[] sortArrayByParityII(int[] A) {
        int[] temp = new int[A.length];
        int i = 0;
        int j = 1;
        for (int num : A) {
            if ((num & 1) == 1) {
                temp[j] = num;
                j += 2;
            } else {
                temp[i] = num;
                i += 2;
            }
        }
        return temp;
    }
}
