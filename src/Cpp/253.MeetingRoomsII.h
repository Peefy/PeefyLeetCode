
#ifndef __MEETING_ROOMS_II_H
#define __MEETING_ROOMS_II_H

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


static int x = []() {
    ios::sync_with_stdio(false);
    cin->tie(NULL);
    return 0;
}();


class Interval {
public:
    int start;
    int end;

    Interval() {
        start = 0;
        end = 0;
    }

    Interval(int s, int e) {
        start = s;
        end = e;
    }
};


class Solution {
public:
    int minMeetingRooms(vector<Interval> intervals) {
        vector<int> starts(intervals.size(), 0);
        vector<int> ends(intervals.size(), 0);
        for (int i = 0; i < intervals.size(); i++) {
            starts[i] = intervals[i].start;
            ends[i] = intervals[i].end;
        }
        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());
        int rooms = 0;
        int activeMeetings = 0;
        int i = 0, j = 0;
        while (i < intervals.size() && j < intervals.size()) {
            if (starts[i] < ends[j]) {
                activeMeetings++;
                i++;
            } else {
                activeMeetings--;
                j++;
            }
            rooms = max(rooms, activeMeetings);
        }
        return rooms;
    }
};


#endif
