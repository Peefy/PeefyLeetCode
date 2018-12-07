
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;

class MyHashMap {
    HashMap<Integer, Integer> hash;
    /** Initialize your data structure here. */
    public MyHashMap() {
        hash = new HashMap<>();
    }
    
    /** value will always be non-negative. */
    public void put(int key, int value) {
        hash.put(key, value);
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    public int get(int key) {
        return hash.getOrDefault(key, -1);
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    public void remove(int key) {
        hash.remove(key);
    }
}


