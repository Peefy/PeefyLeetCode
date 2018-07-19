
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
