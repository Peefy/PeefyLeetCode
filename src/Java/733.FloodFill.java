
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
        LinkedList<HashMap.Node<Integer, Integer>> site = new LinkedList<>();
        int val = image[sr][sc];
        image[sr][sc] = newColor;
        site.push(pair<int,int>(sr, sc));
        while(!site.empty()){
            int x = site.front().first, y = site.front().second;
            site.pop();
            if(x > 0 && image[x-1][y] == val && image[x-1][y] != newColor){
                site.push(pair<int, int>(x - 1, y));
                image[x-1][y] = newColor;
            }
            if(x < image.size() - 1 && image[x+1][y] == val && image[x+1][y] != newColor){
                site.push(pair<int, int>(x + 1, y));
                image[x+1][y] = newColor;
            }
            if(y > 0 && image[x][y-1] == val && image[x][y-1] != newColor){
                site.push(pair<int, int>(x, y - 1));
                image[x][y-1] = newColor;
            }
            if(y < image[0].size() - 1 && image[x][y+1] == val && image[x][y+1] != newColor){
                site.push(pair<int, int>(x, y + 1));
                image[x][y+1] = newColor;
            }
        }
        return image;
    }
}
