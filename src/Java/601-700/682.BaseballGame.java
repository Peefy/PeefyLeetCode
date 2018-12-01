
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int calPoints(String[] ops) {
        LinkedList<Integer> stack = new LinkedList<>();
        for (String i : ops)
            if (i == "+")
                stack.add(stack.getLast() + stack.get(stack.size() - 2));
            else if (i == "C")
                stack.removeLast();
            else if (i == "D")
                stack.add(2 * stack.getLast());
            else
                stack.add(Integer.parseInt(i));
        int sum = 0;
        for (int var : stack) {
            sum += var;
        }
        return sum;
    }
}

