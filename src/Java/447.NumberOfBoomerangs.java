import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;

class Solution {
    public int getdistance(int[][] points, int index1, int index2){
        int dx = points[index1][0] - points[index2][0];
        int dy = points[index1][1] - points[index2][1];
        return dx * dx + dy * dy;
    }

    public int numberOfBoomerangs(int[][] points) {
        int count = 0;
        int n = points.length;
        HashMap<Integer, Integer> hash = new HashMap<>();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }
                int dis = getdistance(points, i, j);
                if (hash.containsKey(dis) == false) {
                    hash.put(dis, 1);
                }
                else{
                    int val = hash.get(dis);
                    hash.remove(dis);
                    hash.put(dis, val + 1);
                }
                for (Integer c : hash.values()) {
                    count += c * (c - 1);
                }
                hash.clear();
            }
        }
        return count;
    }
}

