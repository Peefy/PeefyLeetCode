
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
    public int[][] floodFill(int[][] image, int sr, int sc, int newColor) {
        LinkedList<Integer[]> site = new LinkedList<>();
        int val = image[sr][sc];
        image[sr][sc] = newColor;
        site.add(new Integer[]{sr, sc});
        while(!site.isEmpty()){
            int x = site.getFirst()[0];
            int y = site.getFirst()[1];
            site.removeFirst();
            if(x > 0 && image[x - 1][y] == val && image[x - 1][y] != newColor){
                site.add(new Integer[]{x - 1, y});
                image[x - 1][y] = newColor;
            }
            if(x < image.length - 1 && image[x+1][y] == val && image[x+1][y] != newColor){
                site.add(new Integer[]{x + 1, y});
                image[x + 1][y] = newColor;
            }
            if(y > 0 && image[x][y-1] == val && image[x][y-1] != newColor){
                site.add(new Integer[]{x, y - 1});
                image[x][y - 1] = newColor;
            }
            if(y < image[0].length - 1 && image[x][y+1] == val && image[x][y+1] != newColor){
                site.add(new Integer[]{x, y + 1});
                image[x][y + 1] = newColor;
            }
        }
        return image;
    }
}
