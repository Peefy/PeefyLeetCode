import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;

class Solution {
    public int compress(char[] chars) {
        int n = chars.length;
        int i = 0;
        Integer cnt = 0;
        int insert_pos = 0;
        char char_match = chars[0];
        while (i < n) {
            if (chars[i] == char_match)
                ++cnt;
            else{
                chars[insert_pos] = char_match;
                ++insert_pos;
                if(cnt > 1){
                    for (char cc : cnt.toString().toCharArray()) {
                        chars[insert_pos] = cc;
                        ++insert_pos;
                    }
                } 
                char_match = chars[i];
                cnt = 1;
            }
            ++i;
        }
        chars[insert_pos] = char_match;
        ++insert_pos;
        if(cnt > 1){
            for (char cc : cnt.toString().toCharArray()) {
                chars[insert_pos] = cc;
                ++insert_pos;
            }
        }
        return insert_pos; 
    }
}

