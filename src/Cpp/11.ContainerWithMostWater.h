
#ifndef __CONTAINER_MOST_WATER_H
#define __CONTAINER_MOST_WATER_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
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
};

#endif
