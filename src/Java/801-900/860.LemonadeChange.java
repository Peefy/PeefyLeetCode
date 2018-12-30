
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
    public boolean lemonadeChange(int[] bills) {
        int money5 = 0;
        int money10 = 0;
        for (int bill : bills){
            if (bill == 5)
                money5 += 1;
            else if (bill == 10){
                if (money5 == 0)
                    return false;
                money5 -= 1;
                money10 += 1;
            }
            else{
                if (money5 >= 1 && money10 >= 1){
                    money5 -= 1;
                    money10 -= 1;
                }
                else if (money5 >= 3)
                    money5 -= 3;
                else
                    return false;
            }
        }
        return true;
    }
}
