
import java.awt.List;
import java.util.LinkedList;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public String licenseKeyFormatting(String S, int K) {
        char[] Sarr = S.toCharArray();
        int n = Sarr.length;
        int count = 0;
        int size = 0;
        LinkedList<Character> chars = new LinkedList<>();
        for(int i = 0; i < n; i++)
        {
            int j = n - i - 1;
            if (Sarr[j] == '-')
                continue;
            if (Sarr[j] >= 'a' && Sarr[j] <= 'z')
                chars.add((char)(Sarr[j] - 'a' + 'A'));
            else
                chars.add(Sarr[j]);
            count++;
            size++;
            if (count % K == 0){
                chars.add('-');
                size++;
            }
        }
        
        if (size > 0 && chars.getLast() == '-')
            chars.removeLast();
        Character[] charsarr = new Character[size];
        Collections.reverse(chars);
        chars.toArray(charsarr);
        return chars.stream()
                     .map(String::valueOf)
                     .collect(Collectors.joining());
    }
}