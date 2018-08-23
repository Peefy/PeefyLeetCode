
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
    public int bit1count(String s){
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '1')
                ++count;
        }
        return count;
    }

    public List<String> readBinaryWatch(int num) {
        LinkedList<String> times = new LinkedList<>();
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 60; j++) {
                int h_count = bit1count(Integer.toBinaryString(i));
                int m_count = bit1count(Integer.toBinaryString(j));
                if (h_count + m_count == num)
                    times.add(String.format("%d:%02d", i, j));
            }
        }
        return times;
    }
}

