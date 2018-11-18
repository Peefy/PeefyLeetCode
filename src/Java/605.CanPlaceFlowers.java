
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
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        int count = 0;
        int length = flowerbed.length;
        int i = 0;
        while (i < length){         
            if (flowerbed[i] == 0){             
                if (i == length - 1){
                    count += 1;
                    i += 1;
                }
                else if (flowerbed[i + 1] == 0){
                    count += 1;  
                    i += 1;
                }                  
            }
            else if (flowerbed[i] == 1){
                i += 1;
            }
            i += 1;
        }
        return count >= n;
    }
}

