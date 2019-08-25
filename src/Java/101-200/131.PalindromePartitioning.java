
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class Solution {
    List<List<String>> list = new ArrayList<>();
    String s;

    public List<List<String>> partition(String s) {
        this.s = s;
        List<String> ll = new ArrayList<>();
        dfs(ll, 0);
        return list;
    }

    public void dfs(List<String> ll, int index) {
        if (index == s.length()) {
            list.add(new ArrayList<>(ll));
            return;
        }
        for (int i = index; i < s.length(); i++) {
            if (isPalindrome(index, i)) {
                ll.add(s.substring(index, i + 1));
                dfs(ll, i + 1);
                ll.remove(ll.size() - 1);
            }

        }
    }

    public boolean isPalindrome(int start, int end) {
        while (start < end) {
            if (s.charAt(start) != s.charAt(end))
                return false;
            start++;
            end--;
        }
        return true;
    }
}
