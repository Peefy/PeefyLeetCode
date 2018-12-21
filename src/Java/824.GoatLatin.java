
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

    public boolean isYuanYin(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    public String toGoatLatin(String S) {
        String[] words = S.split(" ");
        for (int i = 0; i < words.length; i++)
        {
            if (isYuanYin(words[i].charAt(0)) == false){
                words[i] = words[i].substring(1) + words[i].charAt(0);
            }
            words[i] += "ma";
            for (int j = 0; j <= i; j++)
            {
                words[i] += 'a';
            }
        }
        return String.join(" ", words);
    }
}
