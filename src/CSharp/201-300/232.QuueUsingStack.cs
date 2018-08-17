using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.QueueUsingStack {
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
}