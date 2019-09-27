
import java.util.List;
import java.util.TreeSet;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;


class Solution {
    public int shortestWordDistance(String[] words, String word1, String word2) {
        int res = words.length;
        int a = -1;
        int b = -1;
        for(int i=0 ; i<words.length ; i++){
            if(words[i].equals(word1)){
                a = i;
            }
            if(words[i].equals(word2)){
                if(word1.equals(word2)){
                    a = b;
                }
                b = i;
            }
            if(a != -1 && b != -1){
                res = Math.min(res, Math.abs(a - b));
            }
        }
        return res;
    }
}   
