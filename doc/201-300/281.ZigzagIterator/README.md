
# problem 281 : ZigzagIterator

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/281.ZigzagIterator/problem.png"/>

## C++ Solution

```c++

class ZigzagIerator {
public:
    vector<vector<int>> vectors;
    int row, col, max;

    ZigzagIerator(vector<int>& v1, vector<int>& v2) {
        vectors.push_back(v1);
        vectors.push_back(v2);
        max = max(v1.size(), v2.size());
    }

    int next() {
        hasNext();
        return vectors[row++][col];
    }

    bool hasNext() {
        while (col < max) {
            while (row < vectors.size()) {
                if (col < vectors[row].size())
                    return true;
                row += 1;
            }
            row = 0;
            col += 1;
        }
        return false;
    }
};

```

## C# Solution

```csharp

public class ZigzagIerator {
    List<List<int>> vectors = new List<List<int>>();
    int row, col, max;
    public ZigzagIerator(List<int> v1, List<int> v2) {
        vectors.Add(v1);
        vectors.Add(v2);
        max = Math.Max(v1.Count, v2.Count);
    }

    public int Next() {
        HasNext();
        return vectors[row++][col];
    }

    public bool HasNext() {
        while (col < max) {
            while (row < vectors.Count) {
                if (col < vectors[row].Count)
                    return true;
                row += 1;
            }
            row = 0;
            col += 1;
        }
        return false;
    }
}

```

## Java Solution

```java

class ZigzagIerator {
    List<List<Integer>> vectors = new ArrayList<>();
    int row, col, max;
    public ZigzagIerator(List<Integer> v1, List<Integer> v2) {
        vectors.add(v1);
        vectors.add(v2);
        max = Math.max(v1.size(), v2.size());
    }

    public int next() {
        hasNext();
        return vectors.get(row++).get(col);
    }

    public boolean hasNext() {
        while (col < max) {
            while (row < vectors.size()) {
                if (col < vectors.get(row).size())
                    return true;
                row += 1;
            }
            row = 0;
            col += 1;
        }
        return false;
    }
}

```

## Python Solution

```python

class ZigzagIerator:

    def __init__(self, v1, v2):
        self.vectors = [v1, v2]
        self.row = 0
        self.col = 0
        self.max = max(len(v1), len(v2))

    def next(self): 
        self.hasNext()
        val = self.vectors[self.row][self.col]
        self.row += 1
        return val

    def hasNext(self): 
        while self.col < self.max:
            while self.row < len(self.vectors):
                if self.col < len(self.vectors[self.row]):
                    return True
                self.row += 1
            self.row = 0
            self.col += 1
        return False

```




