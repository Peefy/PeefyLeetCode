
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

boolean isBadVersion(int version){
    if (version <= 4)
        return false;
    return true;
}

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        while (left <= right) {
            int middle = (left + right) / 2;
            if (isBadVersion(middle) == true) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }
        return left;
    }
}
