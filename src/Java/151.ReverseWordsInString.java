
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class Solution {
    public String reverseWords(String s) {
        String result;
        s = s.concat(" ");
        int length = s.length();
        StringBuffer sb = new StringBuffer();
        Stack stack = new Stack();
        for (int i = length - 1; i >= 0; i--) {
            while (s.charAt(i) == ' ') {
                while (stack.empty() != true) {
                    sb.append(stack.pop());
                }
                if (i == 0)
                    break;
                i--;
            }
            if (s.charAt(i) != ' ') {
                if (i != length - 1 && s.charAt(i + 1) == ' ') {
                    stack.push(' ');
                }
                stack.push(s.charAt(i));
                if (i == 0) {
                    while (stack.empty() != true) {
                        sb.append(stack.pop());
                    }
                    break;
                }
            }
        }
        int sblength = sb.length();
        if (sblength != 0) {
            result = sb.substring(0, sblength - 1);
        } else {
            result = "";
        }
        return result;
    }
}
