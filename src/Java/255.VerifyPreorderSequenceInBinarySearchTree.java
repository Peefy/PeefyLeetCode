
import java.util.List;
import java.util.TreeSet;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;
import java.util.Stack;


public class Solution {
    public boolean verifyPreorde(int[] nums){
        int min = Integer.MIN_VALUE;
        Stack<Integer> stack = new Stack<>();
        for (int num : nums){
            if (num < min)
                return false;
            while (!stack.isEmpty() && num > stack.peek()) {
                min = stack.pop();
            }
            stack.push(num);
        }
        return true;
    } 
}
