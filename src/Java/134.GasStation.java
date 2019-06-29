
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int total = 0;
        int nowsum = 0;
        int start = 0;
        for (int i = 0; i < gas.length; i++) {
            total += (gas[i] - cost[i]);
            if (nowsum < 0){
                nowsum = gas[i] - cost[i];
                start = i;
            }
            else
                nowsum += (gas[i] - cost[i]);
        }
        return total >= 0 ? start : -1;
    }
}

