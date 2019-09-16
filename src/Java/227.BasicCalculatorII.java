
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

class Solution {
    public int calculate(String s) {
        LinkedList<Integer> st = new LinkedList<>();
        int n = s.length(), num = 0, res = 0;
        char op = '+';
        for (int i = 0; i < n; ++i){
            if (s.charAt(i) >= '0')
                num = num * 10 + (s.charAt(i) - '0');
            if ((s.charAt(i) < '0' && s.charAt(i) != ' ') || i == n - 1){
                if (op == '+')
                    st.add(num);
                if (op == '-')
                    st.add(-num);
                if (op == '*' || op == '/'){
                    int temp = (op == '*') ? st.peekLast() * num : st.peekLast() / num;
                    st.removeLast();
                    st.add(temp);
                }
                op = s.charAt(i);
                num = 0;
            }
        }
        while (!st.isEmpty()){
            res += st.peekLast();
            st.removeLast();
        }
        return res;
    }
}
