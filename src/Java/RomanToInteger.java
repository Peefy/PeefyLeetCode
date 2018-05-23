import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class RomanToInteger {
    public int romanToInt(String s) {
        String symbol = "IVXLCDM";
        int[] value = {1, 5, 10, 50, 100, 500, 1000};
        int count = s.length();
        int sum = 0;
        int j = 0;
        while(j < count - 1)
        {
            int b_val_index = symbol.indexOf(s.charAt(j));
            int b_val = value[b_val_index];
            int b_val_next_index = symbol.indexOf(s.charAt(j + 1));
            int b_val_next = value[b_val_next_index];
            if (b_val_next <= b_val)
            {
                sum += b_val;
                j += 1;
            }
            else
            {
                sum += b_val_next - b_val;
                j += 2;
            }
        }
        if (j >= count)
            return sum;
        else
            return sum + value[symbol.indexOf(s.charAt(j))];
    }
}
