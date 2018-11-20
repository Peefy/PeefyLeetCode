
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;

class MyCircularQueue {

    private LinkedList<Integer> list;
    private int size;

    /** Initialize your data structure here. Set the size of the queue to be k. */
    public MyCircularQueue(int k) {
        size = k;
        list = new LinkedList<>();
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    public boolean enQueue(int value) {
        if (list.size() >= size) 
            return false;
        list.add(value);
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    public boolean deQueue() {
        if (list.size() <= 0) 
            return false;
        list.removeFirst();
        return true;
    }
    
    /** Get the front item from the queue. */
    public int Front() {
        if (list.size() <= 0) 
            return -1;
        return list.getFirst();
    }
    
    /** Get the last item from the queue. */
    public int Rear() {
        if (list.size() <= 0) 
            return -1;
        return list.getLast();
    }
    
    /** Checks whether the circular queue is empty or not. */
    public boolean isEmpty() {
        return list.size() <= 0;
    }
    
    /** Checks whether the circular queue is full or not. */
    public boolean isFull() {
        return list.size() >= size;
    }
}

