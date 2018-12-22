
#ifndef __WALKING_ROBOT_SIMULATION_H
#define __WALKING_ROBOT_SIMULATION_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <deque>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <string.h>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int x = 0;
        int y = 0;
        int xdelta = 0;
        int ydelta = 1;
        int dis = 0;
        set<pair<int, int> > s;
        for (auto obstacle : obstacles){
            s.insert(make_pair(obstacle[0], obstacle[1]));
        }
        for (auto command : commands){
            if (command == -2){
                int lastxdelta = xdelta;
                int lastydelta = ydelta;
                xdelta = -lastydelta;
                ydelta = lastxdelta;
            }
            else if (command == -1){
                int lastxdelta = xdelta;
                int lastydelta = ydelta;
                xdelta = lastydelta;
                ydelta = -lastxdelta;
            }
            else{
                for(size_t i = 0; i < command; i++){
                    x += xdelta;
                    y += ydelta;
                    if (s.find(make_pair(x, y)) != s.end()){
                        x -= xdelta;
                        y -= ydelta;
                    }
                    dis = max(dis, x * x + y * y);
                }
            }
        }
        return dis;
    }
};

#endif

