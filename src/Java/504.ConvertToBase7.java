
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;

class Solution {
    public String convertToBase7(int num) {
        if (num == 0) {
            return "0";
        }
        Integer.toString(num, 7);
        int absnum = num > 0 ? num : -num;
        int jinzhi = 7;
        LinkedList<Character> base7list = new LinkedList<>();
        while (absnum > 0){
            base7list.add((char)(absnum % jinzhi + '0'));
            absnum /= jinzhi;
        }       
        if (num < 0)
            base7list.add('-');
        Collections.reverse(base7list);
        return base7list.stream()
                .map(String::valueOf)
                .collect(Collectors.joining());
    }
}

