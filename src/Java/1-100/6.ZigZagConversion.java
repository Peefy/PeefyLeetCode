
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.HashSet;


class Solution {
    public String convert(String s, int numRows) {
        if (numRows == 1 || numRows >= s.length())
            return s;
        String[] L = new String[numRows];
        for (int i = 0; i < numRows; i++) {
            L[i] = "";
        }
        int index = 0;
        int step = 0;
        for (char x : s.toCharArray()){
            L[index] += x;
            if (index == 0)
                step = 1;
            else if (index == numRows - 1)
                step = -1;
            index += step;
        }
        return String.join("", L);
    }
}
