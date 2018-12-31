
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;

class Solution {
    private int gcd(int a, int b){
		if (a % b == 0)
			return b;
		return gcd(b, a % b);
    }
    
    public boolean hasGroupsSizeX(int[] deck) {
        HashMap<Integer, Integer> mi = new HashMap<>();
        int len = deck.length;
        for (int i = 0; i < len; i++) {
            mi.put(deck[i], mi.getOrDefault(deck[i], 0) + 1);
        }
        Iterator<Integer> it = mi.values().iterator();
        int min = it.next();
        if (min < 2)
            return false;
        while (it.hasNext()){
            min = gcd(min, it.next());
            if (min < 2)
                return false;
        }
        return true;
    }
}
