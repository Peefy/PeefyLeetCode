
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.HashSet;


class Solution {
    public int maxArea(int[] height) {
        int left = 0;
        int right = height.length - 1;
        int water = 0;
        int area = 0;
        int mh = 0;
        for(int i = 0; i <= right; i++){
            if (height[i] > mh)
                mh = height[i];
        }     
        while (left != right){
            int distance = right - left;
            if (distance * mh < water)
                break;
            if (height[left] >= height[right]){
                area = height[right] * distance;
                right -= 1;
            }
            else{
                area = height[left] * distance;
                left += 1;
            }
            if (area > water)
                water = area;
        }
        return water;
    }
}
