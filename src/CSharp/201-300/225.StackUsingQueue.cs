using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.StackUsingQueue {
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
}