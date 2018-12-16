
#ifndef __FLOOD_FILL_H
#define __FLOOD_FILL_H

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    queue<pair<int,int>> site;
    int val = image[sr][sc];
    image[sr][sc] = newColor;
    site.push(pair<int,int>(sr,sc));
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
};

#endif
