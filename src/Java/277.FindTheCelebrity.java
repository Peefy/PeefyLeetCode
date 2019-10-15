
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

public class Relation {
    public boolean knows(int candidate1, int candidate2) {
        return false;
    }
}

public class Solution extends Relation {
    public int findCelebrity(int n) {
        int candidate = 0;
        for (int i = 1; i < n; i++) {
            if (knows(candidate, i))
                candidate = i;
        }
        for (int i = 0; i < n; i++) {
            if (i == candidate) 
                continue;
            if (!knows(i, candidate) || knows(candidate, i))
                return -1;
        }

        return candidate;
    }
}
