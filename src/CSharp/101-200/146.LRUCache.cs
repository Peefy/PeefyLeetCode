
using System;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.LRUCache
{

public class LRUCache {
    int cap;

    List<KeyValuePair<int ,int> > cache;
    Dictionary<int, KeyValuePair<int ,int>> map;

    public LRUCache(int capacity) 
    {
        cap = capacity;
        map = new Dictionary<int, KeyValuePair<int, int>>();
        cache = new List<KeyValuePair<int, int>>();
    }
    
    public int Get(int key) 
    {
        if (map.ContainsKey(key) == false)
            return -1;
        var kv = map[key];
        cache.Remove(kv);
        cache.Insert(0, kv);
        map[key] = cache[0];
        return kv.Value; 
    }
    
    public void Put(int key, int value) 
    {
        if (map.ContainsKey(key) == false)
        {
            if (cache.Count == cap) {
                var lastPair = cache[cache.Count - 1];
                int lastKey = lastPair.Key;
                map.Remove(lastKey);
                cache.RemoveAt(cache.Count - 1);
            }
            // cache 没满，可以直接添加
            cache.Insert(0, KeyValuePair.Create(key, value));
            map[key] = cache[0];
        }
        else
        {
            cache.Remove(map[key]);
            cache.Insert(0, KeyValuePair.Create(key, value));
            map[key] = cache[0];
        }
    }
}

}


