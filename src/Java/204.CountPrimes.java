
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
    public int countPrimes(int n) {
        if (n <= 2)
            return 0;
        boolean visit[] = new boolean[n + 1];
        for (int i = 0; i < n + 1; i++) {
            visit[i] = true;
        }
        int count = n - 1;
        int i = 2;
        while (i * i <= n) {
            if (visit[i] == true)
            {
                int j = i * i;
                while (j <= n) {
                    if (visit[j] == true)
                    {
                        visit[j] = false;
                        count -= 1;
                    }
                    j += i;
                }
            }
            i += 1;
        }
        int div = (int)Math.sqrt(n);
        for(int k = 2;k <= div;++k)
            if (n % k == 0)
                return count;
        return count - 1;
    }
}
