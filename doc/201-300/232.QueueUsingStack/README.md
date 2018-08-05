
# problem 232 : QueueUsingStack

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/232.QueueUsingStack/problem.png"/>

## C++ Solution

```c++

class MyQueue {
public:
    deque<int> q;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        q.push_front(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int x = q.back();
        q.pop_back();
        return x;
    }
    
    /** Get the front element. */
    int peek() {
        return q.back();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return q.empty();
    }
};

```

## C# Solution

```csharp

public class MyQueue {

    Stack<int> pushStack = new Stack<int>();
    Stack<int> outStack = new Stack<int>();
    /** Initialize your data structure here. */
    public MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    public void Push(int x) {
        pushStack.Push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    public int Pop() {
        for (int i = 0; i < pushStack.Count - 1; i++)
        {
            outStack.Push(pushStack.Pop());
        }
        var x = pushStack.Pop();
        for (int i = 0; i < outStack.Count; i++)
        {
            pushStack.Push(outStack.Pop());
        }
        return x;
    }
    
    /** Get the front element. */
    public int Peek() {
        return pushStack.Last();
    }
    
    /** Returns whether the queue is empty. */
    public bool Empty() {
        return pushStack.Count == 0;
    }
}

```

## Java Solution

```java

class MyQueue {

    Deque<Integer> q;
    /** Initialize your data structure here. */
    public MyQueue() {
        q = new LinkedBlockingDeque<Integer>();
    }
    
    /** Push element x to the back of queue. */
    public void push(int x) {
        q.addFirst(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    public int pop() {
        return q.removeLast();
    }
    
    /** Get the front element. */
    public int peek() {
        return q.getLast();
    }
    
    /** Returns whether the queue is empty. */
    public boolean empty() {
        return q.isEmpty();
    }
}

```

## Python Solution

```python

class MyQueue:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.stack1 = []
        self.stack2 = []

    def push(self, x):
        """
        Push element x to the back of queue.
        :type x: int
        :rtype: void
        """
        self.stack1.append(x)

    def pop(self):
        """
        Removes the element from in front of queue and returns that element.
        :rtype: int
        """
        for i in range(len(self.stack1) - 1):
            self.stack2.append(self.stack1.pop())
        x = self.stack1.pop()
        for i in range(len(self.stack2)):
            self.stack1.append(self.stack2.pop())
        return x

    def peek(self):
        """
        Get the front element.
        :rtype: int
        """
        return self.stack1[0]

    def empty(self):
        """
        Returns whether the queue is empty.
        :rtype: bool
        """
        return len(self.stack1) == 0

```




