

import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public boolean repeatedSubstringPattern(String s) {
        char[] s_arr = s.toCharArray();
        int size = s.length();
		if (size == 0)
			return false;
		for (int steps = 1; steps <= size / 2; steps++) {
			if (size%steps != 0)
				continue;
            int i = 0;
			for (; i + steps < size; i++) {
				if (s_arr[i] != s_arr[i + steps])
					break;
			}
			if (i + steps == size)
				return true;
		}
		return false;
    }
}


