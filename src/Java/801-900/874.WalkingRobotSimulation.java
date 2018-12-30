
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;
import java.util.HashMap;
import java.util.HashSet;

import javafx.util.Pair;

class Solution {
    public int robotSim(int[] commands, int[][] obstacles) {
        int x = 0;
        int y = 0;
        int xdelta = 0;
        int ydelta = 1;
        int dis = 0;
        HashSet<Pair<Integer, Integer>> s = new HashSet<>();
        for (int[] obstacle : obstacles){
            s.add(new Pair<Integer,Integer>(obstacle[0], obstacle[1]));
        }
        for (int command : commands){
            if (command == -2){
                int lastxdelta = xdelta;
                int lastydelta = ydelta;
                xdelta = -lastydelta;
                ydelta = lastxdelta;
            }
            else if (command == -1){
                int lastxdelta = xdelta;
                int lastydelta = ydelta;
                xdelta = lastydelta;
                ydelta = -lastxdelta;
            }
            else{
                for(int i = 0; i < command; i++){
                    x += xdelta;
                    y += ydelta;
                    if (s.contains(new Pair<Integer,Integer>(x, y)) == true){
                        x -= xdelta;
                        y -= ydelta;
                    }
                    dis = Math.max(dis, x * x + y * y);
                }
            }
        }
        return dis;
    }
}