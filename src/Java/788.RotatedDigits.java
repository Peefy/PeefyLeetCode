
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;

class Solution {
    public int rotatedDigits(int N) {
        int res = 0;
        for (int num = 1;num <= N;++num){
            String numstr = String.valueOf(num);
            if ((numstr.contains("3") == false && numstr.contains("4") == false && numstr.contains("7") == false) && 
            (numstr.contains("2") == true || numstr.contains("5") == true || numstr.contains("6") == true || numstr.contains("9") == true)) {
                res++;
            }
        }
        return res;
    }
}

