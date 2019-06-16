
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.HashSet;


class Solution {
    public int myAtoi(String str) {
        str = str.trim();
        long strNum = 0;
        if (str.length() == 0)
            return 0;
        boolean positive = true;
        char firstchar = str.charAt(0);
        int i = 0;
        if (firstchar == '+' || firstchar == '-'){
            if (firstchar == '-')
                positive = false;
            i = 1;
        }
        for (; i < str.length(); i++) {
            char c = str.charAt(i);
            if (c >= '0' && c <= '9')
                strNum = (long)(strNum * 10) + (long)(c - '0');       
            if (c < '0' || c > '9')
                break;       
            if (strNum > 2147483647){
                if (positive == false)
                    return -2147483648;
                else
                    return 2147483647;
            }
        }

        if (positive == false)
            strNum = 0 - strNum;
        return (int)strNum;
    }
}
