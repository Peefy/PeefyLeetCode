
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
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> ans = new ArrayList<>();
        if (matrix.length == 0)
            return ans;    
            int n = matrix.length;
            int m = matrix[0].length;
            int i = 0;
            int j = 0;
            int[] lrbound = new int[]{0, m};
            int[] udbound = new int[]{0, n};
            int shunxu = 0;
            while (ans.size() < m * n){
                if (shunxu == 0){
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.add(matrix[j][i]);
                        i += 1;
                    }
                    j += 1;
                    i -= 1;
                    udbound[0] += 1;
                    shunxu = 1;
                }
                else if (shunxu == 1){
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.add(matrix[j][i]);
                        j += 1;
                    }
                    i -= 1;
                    j -= 1;
                    lrbound[1] -= 1;
                    shunxu = 2;
                }
                else if (shunxu == 2){
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.add(matrix[j][i]);
                        i -= 1;
                    }
                    j -= 1;
                    i += 1;
                    udbound[1] -= 1;
                    shunxu = 3;
                }
                else{
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.add(matrix[j][i]);
                        j -= 1;
                    }
                    i += 1;
                    j += 1;
                    lrbound[0] += 1;
                    shunxu = 0;
                }
            }
        return ans;
    }
}
