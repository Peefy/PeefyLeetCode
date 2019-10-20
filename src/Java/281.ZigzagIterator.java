
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


class ZigzagIerator {
    List<List<Integer>> vectors = new ArrayList<>();
    int row, col, max;
    public ZigzagIerator(List<Integer> v1, List<Integer> v2) {
        vectors.add(v1);
        vectors.add(v2);
        max = Math.max(v1.size(), v2.size());
    }

    public int next() {
        hasNext();
        return vectors.get(row++).get(col);
    }

    public boolean hasNext() {
        while (col < max) {
            while (row < vectors.size()) {
                if (col < vectors.get(row).size())
                    return true;
                row += 1;
            }
            row = 0;
            col += 1;
        }
        return false;
    }
}

