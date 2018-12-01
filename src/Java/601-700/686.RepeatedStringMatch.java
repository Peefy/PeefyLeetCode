
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
    public int repeatedStringMatch(String A, String B) {
        int count = B.length() / A.length();
        StringBuilder strBuilder = new StringBuilder();
        for (int i = 0; i < count; i++) {
            strBuilder.append(A);
        }
        String match = strBuilder.toString();
        if (match.contains(B) == true) 
            return count;
        count += 1;
        match += A;
        if (match.contains(B) == true) 
            return count;
        count += 1;
        match += A;
        if (match.contains(B) == true) 
            return count;
        return -1;
    }
}
