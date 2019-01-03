
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
    public String[] reorderLogFiles(String[] logs) {
        HashMap<String, String> table = new HashMap<>();
        LinkedList<String> alphalogs = new LinkedList<>();
        LinkedList<String> digitlogs = new LinkedList<>();
        for (String log : logs){
            int index = log.indexOf(' ');
            String first = log.substring(0, index + 1);
            String after = log.substring(index + 1, log.length());
            if ('a' <= after.charAt(0) && after.charAt(0) <= 'z'){
                alphalogs.add(after);
                table.put(after, first);
            }
            else{
                digitlogs.add(log);
            }             
        }
        Collections.sort(alphalogs);
        for (int i = 0; i < alphalogs.size(); i++) {
            alphalogs.set(i, table.get(alphalogs.get(i)) + alphalogs.get(i) );
        }
        alphalogs.addAll(digitlogs);
        return alphalogs.toArray(new String[0]);
    }
}
