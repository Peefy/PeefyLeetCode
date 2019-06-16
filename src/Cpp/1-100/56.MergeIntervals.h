
#ifndef __MERGE_INTERVALS_H
#define __MERGE_INTERVALS_H

#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        vector<Interval> res;
        if(intervals.size() <= 1) return intervals;
        sort(intervals.begin(), intervals.end(), [](Interval x, Interval y){ return x.start < y.start; });
        int i = 0;
        Interval tmp = intervals[0];
        while(i < intervals.size()){
            if(i + 1 < intervals.size() && tmp.end >= intervals[i+1].start){
                if(tmp.end < intervals[i+1].end){
                    tmp.end = intervals[i+1].end;
                }
            }else{
                res.push_back(tmp);
                tmp = intervals[i+1];
            }
            ++i;
        }
        return res;
    }
};

#endif
