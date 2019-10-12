
import java.util.List;
import java.util.TreeSet;
import java.util.Map.Entry;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;
import java.util.Stack;

class Solution {
    // Encodes a list of strings to a single string.
    public String encode(List<String> strs) {
        StringBuilder sb = new StringBuilder();
        for (String str : strs) {
            char[] chArr = str.toCharArray();
            for (char ch : chArr) {
                switch (ch) {
                case ',':
                    sb.append(",!");
                    break;
                case '!':
                    sb.append("!!");
                    break;
                default:
                    sb.append(ch);
                    break;
                }
            }
            sb.append(",");
        }
        return sb.toString();
    }

    // Decodes a single string to a list of strings.
    public List<String> decode(String s) {
        List<String> result = new LinkedList<String>();
        StringBuilder sb = new StringBuilder();
        char[] chArr = s.toCharArray();
        for (int i = 0; i < chArr.length; i++) {
            if (chArr[i] == ',') {
                int cursor = i + 1;
                while (cursor < chArr.length && chArr[cursor] == '!') {
                    cursor++;
                }

                if ((cursor - i) % 2 == 1) {
                    result.add(sb.toString());
                    sb.delete(0, sb.length());
                } else {
                    sb.append(',');
                    i++;
                }

                for (int j = i + 1; j < cursor; j += 2) {
                    sb.append('!');
                }
                i = cursor - 1;
            } else if (chArr[i] == '!') {
                sb.append('!');
                i++;
            } else {
                sb.append(chArr[i]);
            }
        }
        return result;
    }
}
