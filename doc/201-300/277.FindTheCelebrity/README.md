
# problem 277 : FindTheCelebrity

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/277.FindTheCelebrity/problem_en.png"/>

## C++ Solution

```c++

class Relation {
public:
    bool knows(int candidate1, int candidate2) {
        return false;
    }
};

class Solution : public Relation {
public:
    int findCelebrity(int n) {
        int candidate = 0;
        for (int i = 1; i < n; i++) {
            if (knows(candidate, i))
                candidate = i;
        }
        for (int i = 0; i < n; i++) {
            if (i == candidate) 
                continue;
            if (!knows(i, candidate) || knows(candidate, i))
                return -1;
        }

        return candidate;
    }
};

```

## C# Solution

```csharp

public class Relation {
    public bool Knows(int candidate1, int candidate2) {
        return false;
    }
}

public class Solution : Relation {
    public int FindCelebrity(int n) {
        int candidate = 0;
        for (int i = 1; i < n; i++) {
            if (Knows(candidate, i))
                candidate = i;
        }
        for (int i = 0; i < n; i++) {
            if (i == candidate) 
                continue;
            if (!Knows(i, candidate) || Knows(candidate, i))
                return -1;
        }

        return candidate;
    }
}

```

## Java Solution

```java

public class Relation {
    public boolean knows(int candidate1, int candidate2) {
        return false;
    }
}

public class Solution extends Relation {
    public int findCelebrity(int n) {
        int candidate = 0;
        for (int i = 1; i < n; i++) {
            if (knows(candidate, i))
                candidate = i;
        }
        for (int i = 0; i < n; i++) {
            if (i == candidate) 
                continue;
            if (!knows(i, candidate) || knows(candidate, i))
                return -1;
        }

        return candidate;
    }
}


```

## Python Solution

```python

class Solution:
    def knows(self, candidate1, candidate2):
        pass


    def findCelebrity(self, n):
        candidate = 0
        for i in range(1, n):
            if self.knows(candidate, i) == True:
                candidate = i
        for i in range(0, n):
            if i == candidate:
                continue
            if self.knows(i, candidate) == False or self.knows(candidate, i)
                return -1
        return candidate  

```




