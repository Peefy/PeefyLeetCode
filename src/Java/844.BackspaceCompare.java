
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    private LinkedList<Character> build(String str){
        LinkedList<Character> stack = new LinkedList<>();
        for (char s : str.toCharArray()){
            if (s == '#'){
                if (stack.size() > 0)
                    stack.removeLast();
            }
            else
                stack.add(s);
        }
        return stack;
    }

    public boolean backspaceCompare(String S, String T) {
        return build(S).equals(build(T));
    }
}
