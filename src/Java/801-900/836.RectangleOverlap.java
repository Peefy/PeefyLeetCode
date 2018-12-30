
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public boolean isRectangleOverlap(int[] rec1, int[] rec2) {
        return ((long)rec2[0] - (long)rec1[2]) * ((long)rec2[2] - (long)rec1[0]) < 0 && (
            (long)rec2[1] - (long)rec1[3]) * ((long)rec2[3] - (long)rec1[1]) < 0;    
    }
}
