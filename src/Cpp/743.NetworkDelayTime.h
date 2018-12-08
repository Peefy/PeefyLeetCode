
#ifndef __NETWORK_DELAY_TIME_H
#define __NETWORK_DELAY_TIME_H

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

class Solution{
  public:
    int networkDelayTime(vector<vector<int>> &times, int N, int K){
        vector<int> v(N + 1, INT32_MAX);
        v[K] = 0;
        int loop = 1;
        while (loop--){
            for (int i = 0; i < times.size(); i++){
                if (v[times[i][0]] != INT32_MAX){
                    int t = v[times[i][1]];
                    // relax
                    v[times[i][1]] = min(v[times[i][0]] + times[i][2], v[times[i][1]]); //更新连通时间
                    if (t != v[times[i][1]])
                        loop = 1; //如果这一趟没有任何变化,中止循环
                }
            }
        }
        int maxnum = 0;
        for (int j = 1; j <= N; j++){
            if (v[j] == INT32_MAX)
                return -1;
            maxnum = max(maxnum, v[j]);
        }
        return maxnum;
    }
};

#endif
