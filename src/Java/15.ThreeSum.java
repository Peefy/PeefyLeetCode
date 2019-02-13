
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
    public List<List<Integer>> threeSum(int[] nums) {
        HashMap<Integer, Integer> dic = new HashMap<>();
        LinkedList<List<Integer>> rst = new LinkedList<>();
        for (int ele : nums) {
            dic.put(ele, dic.getOrDefault(ele, 0) + 1);
        }
        if (dic.containsKey(0) == true && dic.get(0) > 2){
            LinkedList<Integer> tmp = new LinkedList<>();
            tmp.add(0);tmp.add(0);tmp.add(0);
            rst.add(tmp);
        }
        LinkedList<Integer> pos = new LinkedList<>();
        LinkedList<Integer> neg = new LinkedList<>();
        for(Integer key : dic.keySet()){
            if (key > 0){
                pos.add(key);
            }
            else if(key < 0){
                neg.add(key);
            }
        }
        for (int p : pos){
            for (int n : neg){
                int inverse = -(p + n);
                if (dic.containsKey(inverse) == true){
                    if (inverse == p && dic.get(p) > 1){
                        LinkedList<Integer> tmp = new LinkedList<>();
                        tmp.add(n);tmp.add(p);tmp.add(p);
                        rst.add(tmp);
                    }
                    else if (inverse == n && dic.get(n) > 1){
                        LinkedList<Integer> tmp = new LinkedList<>();
                        tmp.add(n);tmp.add(n);tmp.add(p);
                        rst.add(tmp);
                    }
                    else if (inverse < n || inverse > p || inverse == 0){
                        LinkedList<Integer> tmp = new LinkedList<>();
                        tmp.add(n);tmp.add(inverse);tmp.add(p);
                        rst.add(tmp);
                    }
                }
            }
        }
        return rst;     
    }
}
