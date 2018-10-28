
import java.awt.List;
import java.lang.annotation.Retention;
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
    public String addStrings(String num1, String num2) {
        int n1 = num1.length();
        int n2 = num2.length();
        int n = n1;
        int c = 0;
        String num = "";
        if (n1 < n2) {
            n = n2;
            for (int i = 0; i < n2 - n1; i++) {
                num1 = "0" + num1;
            }
        } else {
            n = n1;
            for (int i = 0; i < n1 - n2; i++) {
                num2 = "0" + num2;
            }
        }
        for (int i = 0; i < n; i++) {
            int j = n - 1 - i;
            int bit = num1.charAt(j) - '0' + num2.charAt(j) - '0' + c;
            if (bit >= 10) {
                c = 1;
                bit -= 10;
            } else {
                c = 0;
            }
            num = (char)(bit + '0') + num;
        }
        if (c == 1) {
            num = (char)(c + '0') + num;
        }
        return num;
    }
}

    