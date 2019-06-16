
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;


public class Interval {
    int start;
    int end;
    Interval() { start = 0; end = 0; }
    Interval(int s, int e) { start = s; end = e; }
}

class Solution {
    public List<Interval> merge(List<Interval> intervals) {
        LinkedList<Interval> ret = new LinkedList<>();
        Collections.sort(intervals, (a, b) -> (a.start - b.start));
        for(Interval temp : intervals) {
            if(ret.isEmpty() || ret.peekLast().end < temp.start)
                ret.add(temp);
            else
                ret.peekLast().end = Math.max(ret.peekLast().end, temp.end);
        }
        return ret; 
    }
}
