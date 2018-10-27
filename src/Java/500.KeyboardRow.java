
import java.awt.List;
import java.util.LinkedList;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public String[] findWords(String[] words) {
        String firstLineLower = "qwertyuiop";
        String firstLineUpper = "QWERTYUIOP";
        String secondLineLower = "asdfghjkl";
        String secondLineUpper = "ASDFGHJKL";
        String thirdLineLower = "zxcvbnm";
        String thirdLineUpper = "ZXCVBNM";
        LinkedList<String> r = new LinkedList<>();
        for(String word : words){
            int count = 0;
            int[] flag = new int[3];
            int length = word.length();
            for(char letter : word.toCharArray()){
                if ((firstLineLower.indexOf(letter) != -1) || 
                    (firstLineUpper.indexOf(letter) != -1)){
                        if (flag[1] + flag[2] >= 1)
                            break;
                        flag[0] = 1;
                        count += 1;
                    }
                if ((secondLineLower.indexOf(letter) != -1) || 
                    (secondLineUpper.indexOf(letter) != -1)){
                        if (flag[0] + flag[2] >= 1)
                            break;
                        flag[1] = 1;
                        count += 1;
                    }
                if ((thirdLineLower.indexOf(letter) != -1) || 
                    (thirdLineUpper.indexOf(letter) != -1)){
                        if (flag[0] + flag[1] >= 1)
                            break;
                        flag[2] = 1;
                        count += 1;
                    }
            }
            if (count == length)
                r.add(word);
        } 
        return r.toArray(new String[r.size()]);
    }
}