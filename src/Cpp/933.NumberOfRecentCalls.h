
#ifndef __NUMBER_OF_RENCENT_COUNTER_H
#define __NUMBER_OF_RENCENT_COUNTER_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <stdint.h>
#include <memory.h>

using namespace std;

static int x = []() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);              
    return 0;
}();

class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push(t);
        while (t - q.front() > 3000){
            q.pop();
        }
        return q.size();
    }
};

#endif

