
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class MinStack {

    int min = Integer.MAX_VALUE;
    LinkedList<Integer> arr = new LinkedList<>();
    public MinStack() {
        
    }
    
    public void push(int x) {
        if (x < min) {
            arr.add(min);
            min = x;
        }
        arr.add(x);
    }
    
    public void pop() {
        int element = arr.getLast();
        arr.removeLast();
        if (element == min) {
            min = arr.getLast();
            arr.removeLast();
        }
    }
    
    public int top() {
        return arr.getLast();
    }
    
    public int getMin() {
        return min;
    }
}
