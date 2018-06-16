import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Stack;

public class ValidParentheses {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();
        int n = s.length();
        if(n % 2 == 1){
            return false;
        }
        for(int i = 0;i < n; ++i){
            Character c = s.charAt(i);
            if(c == '(' || c == '[' || c == '{'){
                stack.push(c);
            }
            else{
                if(c == ')' || c == ']' || c == '}'){
                    if(stack.empty() == true)
                        return false;
                    Character last = stack.pop();
                    if(last == '(' && c == ')'){
                        continue;
                    }
                    if(last == '[' && c == ']'){
                        continue;
                    }
                    if(last == '{' && c == '}'){
                        continue;
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        return stack.empty();
    }
}
