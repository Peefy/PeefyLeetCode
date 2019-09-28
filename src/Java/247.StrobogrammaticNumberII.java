
import java.util.List;
import java.util.TreeSet;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;


class Solution {
    public List<String> findStrobogrammatic(int n) {
        HashMap<Character, Character> diffMap = new HashMap<>();
        char[] selfArr = new char[] { '0', '1', '8' };
        diffMap.put('6', '9');
        diffMap.put('9', '6');
        List<String> result = new LinkedList<String>();
        buildResult(0, n, new char[n], selfArr, diffMap, result);
        return result;
    }

    private void buildResult(int curPos, int n, char[] cache, char[] selfArr, HashMap<Character, Character> diffMap, List<String> result) {
        if (curPos < (n + 1) / 2) {
            for (char c : selfArr) {
                if (curPos == 0 && c == '0' && n != 1)
                    continue;
                cache[curPos] = cache[n - 1 - curPos] = c;
                buildResult(curPos + 1, n, cache, selfArr, diffMap, result);
            }
            if (n % 2 == 0 || curPos != n / 2) {
                for (char c : diffMap.keySet()) {
                    cache[curPos] = c;
                    cache[n - 1 - curPos] = diffMap.get(c);
                    buildResult(curPos + 1, n, cache, selfArr, diffMap, result);
                }
            }
        } else if (n != 0) {
            result.add(new String(cache));
        }
    }
}
