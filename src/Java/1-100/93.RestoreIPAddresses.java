
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

    public void recursive(List<String> ans, LinkedList<String> tmp, char[] s, int l, int index){
        if (tmp.size() == 4 && l == s.length){
            ans.add(String.join(".", tmp));
            return;
        }
        for (int i = index; i < 4; i++) {
            for (int j = 1; j < 4; j++) {
                if (l + j > s.length || (s[l] == '0' && j > 1))
                    continue;
                int num = 0;
                for (int k = 0; k < j; ++k) {
                    num = num * 10 + s[l + k] - '0';
                }
                if (num > 255)
                    continue;
                l += j;
                tmp.add(String.valueOf(num));
                recursive(ans, tmp, s, l, i + 1);
                tmp.removeLast();
                l -= j;
            }
        }
    }

    public List<String> restoreIpAddresses(String s) {
        List<String> ans = new ArrayList<>();
        LinkedList<String> tmp = new LinkedList<>();
        recursive(ans, tmp, s.toCharArray(), 0, 0);
        return ans;
    }
}
