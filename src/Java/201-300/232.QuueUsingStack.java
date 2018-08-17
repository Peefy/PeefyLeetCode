
import java.awt.List;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Deque;
import java.util.Set;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;

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
