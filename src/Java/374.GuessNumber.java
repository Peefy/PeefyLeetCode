
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;

public class Solution extends GuessGame {
    public int guessNumber(int n) {
        int left = 1;
        int right = n;
        while (left <= right){
            int middle = left + (right - left) / 2;
            int num = middle;
            if (guess(num) == 0)
                return num;
            if (guess(num) == 1)
                left = middle + 1;
            if (guess(num) == -1)
                right = middle - 1;
        }
        return left;
    }
}

