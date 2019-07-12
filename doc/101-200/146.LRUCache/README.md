
# problem 146 ：LRUCache


## C++ Solution

```c++

class LRUCache {
private:
    int cap;
    // 双链表：装着 (key, value) 元组
    list<pair<int, int>> cache;
    // 哈希表：key 映射到 (key, value) 在 cache 中的位置
    unordered_map<int, list<pair<int, int>>::iterator> map;
public:
    LRUCache(int capacity) {
        this->cap = capacity; 
    }
    
    int get(int key) {
        auto it = map.find(key);
        // 访问的 key 不存在
        if (it == map.end()) return -1;
        // key 存在，把 (k, v) 换到队头
        pair<int, int> kv = *map[key];
        cache.erase(map[key]);
        cache.push_front(kv);
        // 更新 (key, value) 在 cache 中的位置
        map[key] = cache.begin();
        return kv.second; // value
    }
    
    void put(int key, int value) {

        /* 要先判断 key 是否已经存在 */ 
        auto it = map.find(key);
        if (it == map.end()) {
            /* key 不存在，判断 cache 是否已满 */ 
            if (cache.size() == cap) {
                // cache 已满，删除尾部的键值对腾位置
                // cache 和 map 中的数据都要删除
                auto lastPair = cache.back();
                int lastKey = lastPair.first;
                map.erase(lastKey);
                cache.pop_back();
            }
            // cache 没满，可以直接添加
            cache.push_front(make_pair(key, value));
            map[key] = cache.begin();
        } else {
            /* key 存在，更改 value 并换到队头 */
            cache.erase(map[key]);
            cache.push_front(make_pair(key, value));
            map[key] = cache.begin();
        }
    }
};

```

## C# Solution

```csharp
 
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

```

## Java Solution

```java

class LRUCache extends LinkedHashMap<Integer, Integer>{
    private int capacity;
    
    public LRUCache(int capacity) {
        super(capacity, 0.75F, true);
        this.capacity = capacity;
    }

    public int get(int key) {
        return super.getOrDefault(key, -1);
    }

    public void put(int key, int value) {
        super.put(key, value);
    }

    @Override
    protected boolean removeEldestEntry(Map.Entry<Integer, Integer> eldest) {
        return size() > capacity; 
    }
}

```

## Python Solution

```python

from collections import OrderedDict
class LRUCache(OrderedDict):

    def __init__(self, capacity):
        """
        :type capacity: int
        """
        self.capacity = capacity

    def get(self, key):
        """
        :type key: int
        :rtype: int
        """
        if key not in self:
            return - 1
        
        self.move_to_end(key)
        return self[key]

    def put(self, key, value):
        """
        :type key: int
        :type value: int
        :rtype: void
        """
        if key in self:
            self.move_to_end(key)
        self[key] = value
        if len(self) > self.capacity:
            self.popitem(last = False)

```


