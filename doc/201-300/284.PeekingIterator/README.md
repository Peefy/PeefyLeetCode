
# problem 284 : PeekingIterator

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/284.PeekingIterator/problem.png"/>

## C++ Solution

```c++

class PeekingIterator : public Iterator {
private:
    int cur;
    vector<int> res;
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	    cur = 0;
        res = std::move(nums);
	}

    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        if (res.size() == 0 || cur >= res.size())
            return -100000;
        return res[cur];
	}

	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    int result = -100000;
        if (cur < res.size()) {
            result = res[cur++];
        }
        return result;
	}

	bool hasNext() const {
	    bool result = false;
        if (cur < res.size()) {
            result = true;
        }
        return result;
	}
};

```

## C# Solution

```csharp

public class PeekingIterator : Iterator<int> {
    int cur;
    List<int> res;

    public PeekingIterator(Iterator<int> itr) {
        res = new List<int>();
        while (itr.HasNext()) {
            res.Add(itr.Next());
        }
    }

    public int Peek() {
        if (res.Count == 0 || cur >= res.Count) {
            return -100000;
        }
        return res[cur];
    }

    public override int Next() {
        int result = -100000;
        if (cur < res.Count) {
            result = res[cur++];
        }
        return result;
    }

    public override bool HasNext() {
        bool result = false;
        if (cur < res.Count) {
            result = true;
        }
        return result;
    }
}


```

## Java Solution

```java

class PeekingIterator implements Iterator<Integer> {
    int cur;
    List<Integer> res;

    public PeekingIterator(Iterator<Integer> itr) {
        res = new ArrayList<Integer>();
        while (itr.hasNext()) {
            res.add(itr.next());
        }
    }

    public Integer peek() {
        if (res.isEmpty() || cur >= res.size()) {
            return -100000;
        }
        return res.get(cur);
    }

    @Override
    public Integer next() {
        int result = -100000;
        if (cur < res.size()) {
            result = res.get(cur++);
        }
        return result;
    }

    @Override
    public boolean hasNext() {
        boolean result = false;
        if (cur < res.size()) {
            result = true;
        }
        return result;
    }
}

```

## Python Solution

```python

class PeekingIterator:
    def __init__(self, iterator):
        """
        Initialize your data structure here.
        :type iterator: Iterator
        """
        self.cur = 0
        self.res = []
        while iterator.hasNext():
            self.res.append(iterator.next())
        

    def peek(self):
        """
        Returns the next element in the iteration without advancing the iterator.
        :rtype: int
        """
        if len(self.res) == 0 or self.cur >= len(self.res):
            return -100000
        return self.res[self.cur]
        

    def next(self):
        """
        :rtype: int
        """
        re = -100000
        if self.cur < len(self.res):
            re = self.res[self.cur]
            self.cur += 1
        return re
        

    def hasNext(self):
        """
        :rtype: bool
        """
        re = False
        if self.cur < len(self.res):
            re = True
        return re

```




