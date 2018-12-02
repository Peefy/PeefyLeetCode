
# problem 705 : DesignHashSet

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/705.DesignHashSet/problem.png"/>

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    
    void add(int key) {
        table[hash(key)][pos(key)] = true;
    }
    
    void remove(int key) {
        table[hash(key)][pos(key)] = false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return table[hash(key)][pos(key)];
    }
private:
    int size;
    const int bucket = 1000;
    const int item = 1001;
    bool table[1000][1000] = {{false}};

    int hash(int i){
        return i % bucket;
    }

    int pos(int i){
        return i / bucket;
    }

};

```

## C# Solution

```csharp

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

```

## Java Solution

```java

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

```

## Python Solution

```python

class MyHashSet:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.bucket = [0] * 1000000

    def add(self, key):
        """
        :type key: int
        :rtype: void
        """
        self.bucket[key - 1] = 1

    def remove(self, key):
        """
        :type key: int
        :rtype: void
        """
        self.bucket[key - 1] = 0

    def contains(self, key):
        """
        Returns true if this set contains the specified element
        :type key: int
        :rtype: bool
        """
        return self.bucket[key - 1] == 1

```





