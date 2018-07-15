
import java.awt.List;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;

public class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {
        int r = 0;
        for (int i = 0; i < 32; i++) {
            int bit = (((n)>>(i))&0x01);  
            if (bit == 1)
                r |=  (1<<( 31 - i));   
            else
                r &= ~(1<<( 31 - i));
        }
        return r;
    }
}


