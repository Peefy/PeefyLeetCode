using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.BinarySearch
{
public class MyHashMap {

    Dictionary<int, int> hash;
    /** Initialize your data structure here. */
    public MyHashMap() {
        hash = new Dictionary<int, int>();
    }
    
    /** value will always be non-negative. */
    public void Put(int key, int value) {
        if (hash.ContainsKey(key) == true)
            hash[key] = value;
        else
            hash.Add(key, value);
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    public int Get(int key) {
        return hash.GetValueOrDefault(key, -1);
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    public void Remove(int key) {
        hash.Remove(key);
    }
}
}
