
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public boolean isOneBitCharacter(int[] bits) {
        int size = bits.length;
        int i = 0;
        for(; i < size - 1; ++i){
            if (bits[i] == 1)
                ++i;
        }
        return i == size - 1;
    }
}
