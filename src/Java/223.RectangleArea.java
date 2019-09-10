
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
    public int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        if (E > C || A > G)
            return (C - A) * (D - B) + (G - E) * (H - F);
        if (F > D || H < B)
            return (C - A) * (D - B) + (G - E) * (H - F);
        int length = Math.min(C, G) - Math.max(A, E);
        int width = Math.min(D, H) - Math.max(B, F);
        return (C - A) * (D - B) + (G - E) * (H - F) - length * width;
    }
}
