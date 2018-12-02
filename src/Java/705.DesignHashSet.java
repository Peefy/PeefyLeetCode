
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;

class MyHashSet {

    HashSet<Integer> hash;
    /** Initialize your data structure here. */
    public MyHashSet() {
        hash = new HashSet<>();
    }
    
    public void add(int key) {
        hash.add(key);
    }
    
    public void remove(int key) {
        hash.remove(key);
    }
    
    /** Returns true if this set contains the specified element */
    public boolean contains(int key) {
        return hash.contains(key);
    }
}


