
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

class Solution {
    public boolean isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        switch (n) {
            case 1 << 0:
            case 1 << 1:
            case 1 << 2:
            case 1 << 3:
            case 1 << 4:
            case 1 << 5:
            case 1 << 6:
            case 1 << 7:
            case 1 << 8:
            case 1 << 9:
            case 1 << 10:
            case 1 << 11:
            case 1 << 12:
            case 1 << 13:
            case 1 << 14:
            case 1 << 15:
            case 1 << 16:
            case 1 << 17:
            case 1 << 18:
            case 1 << 19:
            case 1 << 20:
            case 1 << 21:
            case 1 << 22:
            case 1 << 23:
            case 1 << 24:
            case 1 << 25:
            case 1 << 26:
            case 1 << 27:
            case 1 << 28:
            case 1 << 29:
            case 1 << 30:
            case 1 << 31:
                return true;      
            default:
                break;
        }
        return false;
    }
}
