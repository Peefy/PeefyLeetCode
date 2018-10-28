
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;

class Solution {
    public List<String> fizzBuzz(int n) {
        LinkedList<String> r = new LinkedList<>();
        for (int i = 1; i <= n; i++) {
            if (i % 15 == 0) {
                r.add("FizzBuzz");
            } else if (i % 3 == 0) {
                r.add("Fizz");
            } else if (i % 5 == 0) {
                r.add("Buzz");
            } else {
                r.add(new Integer(i).toString());
            }
        }
        return r;
    }
}

    