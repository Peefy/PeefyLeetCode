
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.PriorityQueue;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;

class KthLargest {
    private Queue<Integer> heap;
    private int maxSize;
    public KthLargest(int k, int[] nums) {
        heap = new PriorityQueue<>(k);
        maxSize = k;
        for (int num:nums) {
            this.add(num);
        }
    }

    public int add(int val) {
        if (heap.isEmpty() || heap.size() < maxSize) {
            heap.add(val);
        } else if (val > heap.peek()) {
            heap.poll();
            heap.add(val);
        }
        return heap.peek();
    }
}

