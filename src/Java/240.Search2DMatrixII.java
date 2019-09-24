
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
    public boolean searchMatrix(int[][] matrix, int target) {
        if (matrix == null || matrix.length == 0) {
            return false;
        }
        int row = matrix.length;
        int col = matrix[0].length;
        int posX = 0;
        int posY = col - 1;
        while (posX < row && posY >= 0) {
            if (matrix[posX][posY] == target) {
                return true;
            }
            if (matrix[posX][posY] > target) {
                posY--;
            } else {
                posX++;
            }
        }
        return false;
    }
}
