import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class PalindroNumber {
    public boolean isPalindrome(int x) {
        if(x < 0)
            return false;
        ArrayList<Integer> bit = new ArrayList<>();
        int pre = x;
        while(x > 0)
        {
            int cur = x % 10;
            bit.add(cur);
            x = x / 10;
        }
        int sum = 0;
        for(int b : bit)
        {
            sum = sum * 10 + b; 
        }
        if(sum == pre)
        {
            return true;
        }
        return false;
    }
}
