
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class ListNode {
    int val;
    ListNode next;

    ListNode(int x) {
        val = x;
        next = null;
    }
}

class Solution {
    public static int evalRPN(String[] tokens) {
        Stack stack = new Stack();
        for(int i=0;i<tokens.length;i++){
            String tokeni = tokens[i];
            if(tokeni.equals("+") || tokeni.equals("-") || tokeni.equals("*") || tokeni.equals("/")){
                int v1 = (Integer) stack.pop();
                int v2 = (Integer) stack.pop();
                if(tokeni.equals("+")){
                    stack.push(v2+v1);
                }
                if(tokeni.equals("-")){
                    stack.push(v2-v1);
                }
                if(tokeni.equals("*")){
                    stack.push(v2*v1);
                }
                if(tokeni.equals("/")){
                    int res = v2/v1;
                    stack.push(res);
                }
            }else{
                stack.push(Integer.parseInt(tokeni));
            }
        }
        return (Integer) stack.peek();
    }
}


