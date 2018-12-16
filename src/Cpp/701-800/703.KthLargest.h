
#ifndef __K_TH_LARGEST_H
#define __K_TH_LARGEST_H

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <math.h>

using namespace std;

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class KthLargest {
public:
    //使用优先队列来解决该问题
    KthLargest(int k, vector<int> nums) {
        kth = k;
        for(auto n : nums){
            pq.push(n);
            if(pq.size() > kth) pq.pop();
        }
    } 
    int add(int val) {
        pq.push(val);
        if(pq.size() > kth) pq.pop();
        return pq.top();
    }
private:
    priority_queue<int, vector<int>, greater<int>> pq;
    int kth;
};


#endif
