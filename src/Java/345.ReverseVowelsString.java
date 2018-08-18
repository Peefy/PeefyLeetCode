
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;

class Solution {
    public String reverseVowels(String s) {
        char[] list1 = s.toCharArray();
        String vowels = "aeiouAEIOU";
        int j = list1.length - 1;
        int i = 0;
        while (i < j) {
            if (vowels.indexOf(s.charAt(j)) == -1)
                j -= 1;
            else if (vowels.indexOf(s.charAt(i)) == -1)
                i += 1;
            else{
                char tmp = list1[i];
                list1[i] = list1[j];
                list1[j] = tmp;
                i += 1;
                j -= 1;
            }
        }
        return new String(list1);
    }
}


