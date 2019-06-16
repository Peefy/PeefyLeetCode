
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;


class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> res = new LinkedList<>();
        recursive(n, 0, 0, res, "");
        return res;
    }

    void recursive(int n, int count1, int count2, List<String> res, String ans){
        if (count1 > n || count2 > n) 
            return;
        if (count1 == n && count2 == n)  
            res.add(ans);
        if (count1 >= count2){
            String ans1 = ans;
            recursive(n, count1+1, count2, res, ans+"(");
            recursive(n, count1, count2+1, res, ans1+")");
        }
    }

}
