
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;

class Solution {

    public int find(char[] arr, char c){
        int index = -1;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == c)
                return i;
        }
        return -1;
    }

    public int rfind(char[] arr, char c){
        int index = -1;
        for (int i = arr.length - 1; i >= 0; i--) {
            if (arr[i] == c)
                return i;
        }
        return -1;
    }

    public int firstUniqChar(String s) {
        char[] arr = s.toCharArray();
        HashSet<Character> hash = new HashSet<>();
        int ans = arr.length;
        for (int i = 0; i < ans; i++) {
            hash.add(arr[i]);
        }
        for(Character c : hash){
            int c_s = find(arr, c);
            int c_r = rfind(arr, c);
            if (c_s == c_r && c_s != -1){
                ans = Math.min(ans, c_s);
            }
        }
        return ans < arr.length ? ans : -1;
    }
}

