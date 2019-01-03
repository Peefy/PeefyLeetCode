
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
    public String reverseOnlyLetters(String S) {
        LinkedList<Character> res = new LinkedList<>();
        String s = "";
        for (char i : S.toCharArray()){
            if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z'))
                res.add(i);
        }    
        for (char i : S.toCharArray()){
            if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z')){
                s += res.removeLast();
            }
            else
                s += i;
        }
        return s;
    }
}
