
# problem 933 : NumberOfRecentCalls

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/901-1000/933.NumberOfRecentCalls/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push(t);
        while (t - q.front() > 3000){
            q.pop();
        }
        return q.size();
    }
};

```

## C# Solution

```csharp

public class RecentCounter {

    Queue<int> q;
    public RecentCounter() {
        q = new Queue<int>();
    }
    
    public int Ping(int t) {
        q.Enqueue(t);
        while (t - q.Peek() > 3000){
            q.Dequeue();
        }
        return q.Count;
    }
}

```

## Java Solution

```java

class RecentCounter {

    LinkedList<Integer> q;
    public RecentCounter() {
        q = new LinkedList<>();
    }
    
    public int ping(int t) {
        q.add(t);
        while (t - q.getFirst() > 3000){
            q.removeFirst();
        }
        return q.size();
    }
}

```

## Python Solution

```python

class RecentCounter:

    def __init__(self):
        self.queue = []

    def ping(self, t):
        """
        :type t: int
        :rtype: int
        """
        self.queue.append(t)
        while t - self.queue[0] > 3000:
            self.queue.pop(0)
        return len(self.queue)

```





