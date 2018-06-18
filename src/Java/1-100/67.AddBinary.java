import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Solution {
    public String addBinary(String a, String b) {
        int jinzhi = 2;
        int n1 = a.length();
        int n2 = b.length();
        int i = 0;
        String sum = "";
        int n = n1 > n2 ? n1 : n2;
        int c = 0;
        while (i < n - n1) {
            a = "0" + a;
            i += 1;
        }
        while (i < n - n2) {
            b = "0" + b;
            i += 1;
        }
        i = n - 1;
        while (i >= 0) {
            Integer r = (a.charAt(i) - '0') + (b.charAt(i) - '0') + c;
            c = r / jinzhi;
            r = r % jinzhi;
            sum = r.toString() + sum;
            i -= 1;
        }
        if (c == 1)
            sum = "1" + sum;
        return sum;
    }
}
