
# problem 225 : StackUsingQueue

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/225.StackUsingQueue/problem.png"/>

## C++ Solution

```c++

class MyStack {
public:
    deque<int> q;
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q.push_back(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int x = q.back();
        q.pop_back();
        return x;
    }
    
    /** Get the top element. */
    int top() {
        return q.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }
};

```

## C# Solution

```csharp

public class MyStack {

    /** Initialize your data structure here. */
    Queue<int> q1 = new Queue<int>();
    Queue<int> q2 = new Queue<int>();
    int count = 0;
    public MyStack() {
        
    }
    
    /** Push element x onto stack. */
    public void Push(int x) {
        q1.Enqueue(x);
        ++count;
    }
    
    /** Removes the element on top of the stack and returns that element. */
    public int Pop() {
        for (int i = 0; i < count - 1; i++)
        {
            q2.Enqueue(q1.Dequeue());
        }
        var e = q1.Dequeue();
        for (int i = 0; i < q2.Count; i++)
        {
            q1.Enqueue(q2.Dequeue());
        }
        --count;
        return e;
    }
    
    /** Get the top element. */
    public int Top() {
        return q1.Last();
    }
    
    /** Returns whether the stack is empty. */
    public bool Empty() {
        return count == 0;
    }
}

```

## Java Solution

```java

import java.util.concurrent.LinkedBlockingDeque;

class MyStack {

    Deque<Integer> q;
    public MyStack() {
        q = new LinkedBlockingDeque<Integer>();
    }
    
    /** Push element x onto stack. */
    public void push(int x) {
        q.addLast(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    public int pop() {
        return q.removeLast();
    }
    
    /** Get the top element. */
    public int top() {
        return q.getLast();
    }
    
    /** Returns whether the stack is empty. */
    public boolean empty() {
        return q.isEmpty();
    }
}

```

## Python Solution

```python

class MyStack:
    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.__queue1 = []
        self.__queue2 = []
        self.__count = 0

    def push(self, x):
        """
        Push element x onto stack.
        :type x: int
        :rtype: void
        """
        self.__queue1.append(x)
        self.__count += 1

    def pop(self):
        """
        Removes the element on top of the stack and returns that element.
        :rtype: int
        """
        for i in range(self.__count - 1):
            self.__queue2.append(self.__queue1.pop(0))
        x = self.__queue1.pop(0)
        for i in range(len(self.__queue2)):
            self.__queue1.append(self.__queue2.pop(0))
        self.__count -= 1
        return x

    def top(self):
        """
        Get the top element.
        :rtype: int
        """
        return self.__queue1[self.__count - 1]

    def empty(self):
        """
        Returns whether the stack is empty.
        :rtype: bool
        """
        return self.__count == 0

```




