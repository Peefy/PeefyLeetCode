
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int networkDelayTime(int[][] times, int N, int K) {
        int limit = 99999999;
        int[][] matrix = new int[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; ++j){
                matrix[i][j] = -1;
            }
        }                                                                                                                                                                                       
        for (int[] uvw : times) {
            matrix[uvw[0] - 1][uvw[1] - 1] = uvw[2];
        }
        // Dijkstra算法
        int last_p = K - 1;
        int[] done = new int[N];
        done[last_p] = 1;

        int[] compare_buf = new int[N];
        int[] result_buf = new int[N];
        int[] front_node = new int[N];
        for (int i = 0; i < N; i++) {
            compare_buf[i] = limit;
            result_buf[i] = limit;
            front_node[i] = -1;
        }
        result_buf[K - 1] = 0;
        int maxresult = -limit;
        while (true){
            // 对last点进行遍历,更新compare_buf
            for (int i = 0; i < matrix[last_p].length; i++) {
                int v = matrix[last_p][i];
                if (done[i] == 1 || v == -1)
                    continue;
                int value = v + result_buf[last_p];
                // 松弛操作relax
                if (value < compare_buf[i]){
                    compare_buf[i] = value;
                    front_node[i] = last_p;
                }
            }
            int temp_min = limit;
            int temp_node = -1;
            for (int i = 0; i < compare_buf.length; i++) {
                int value = compare_buf[i];
                if (done[i] == 1 || value == limit)
                    continue;
                if (value < temp_min){
                    temp_min = value;
                    temp_node = i;
                }
            }
            if (temp_node == 1)
                break;
            else{
                done[temp_node] = -1;
                last_p = temp_node;
                result_buf[temp_node] = temp_min;        
                maxresult = Math.max(temp_min, maxresult);
            }
        }
        for (int d : done){
            if (d == 0)
                return -1;
        }
        return maxresult;
    }
}
