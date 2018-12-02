using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.BinarySearch
{
public class MyHashSet {
    HashSet<int> hash;
    /** Initialize your data structure here. */
    public MyHashSet() {
        hash = new HashSet<int>();
    }
    
    public void Add(int key) {
        hash.Add(key);
    }
    
    public void Remove(int key) {
        hash.Remove(key);
    }
    
    /** Returns true if this set contains the specified element */
    public bool Contains(int key) {
        return hash.Contains(key);
    }
}
}
