
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
    public int numSpecialEquivGroups(String[] A) {
        HashSet<String> hash = new HashSet<>();
        for (String a : A){
            char[] builder1;
            char[] builder2;
            if (a.length() % 2 == 0){
                builder1 = new char[a.length() / 2];
                builder2 = new char[a.length() / 2];
            }
            else{
                builder1 = new char[a.length() / 2 + 1];
                builder2 = new char[a.length() / 2];
            }
            for (int i = 0; i < a.length(); i+=2) {
                builder1[i / 2] = a.charAt(i);
            }
            for (int i = 1; i < a.length(); i+=2) {
                builder2[i / 2] = a.charAt(i);
            }
            Arrays.sort(builder1);
            Arrays.sort(builder2);
            hash.add(String.valueOf(builder1) + String.valueOf(builder2));
        }
        return hash.size();
    }
}
