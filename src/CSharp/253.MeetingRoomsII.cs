
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.MeetingRoomsII
{

public class Interval {
    public int start;
    public int end;

    public Interval() {
        start = 0;
        end = 0;
    }

    public Interval(int s, int e) {
        start = s;
        end = e;
    }
}

public class Solution {
    public int minMeetingRooms(Interval[] intervals) {
        int[] starts = new int[intervals.Length];
        int[] ends = new int[intervals.Length];
        for (int i = 0; i < intervals.Length; i++) {
            starts[i] = intervals[i].start;
            ends[i] = intervals[i].end;
        }
        Array.Sort(starts);
        Array.Sort(ends);
        int rooms = 0;
        int activeMeetings = 0;
        int i = 0, j = 0;
        while (i < intervals.Length && j < intervals.Length) {
            if (starts[i] < ends[j]) {
                activeMeetings++;
                i++;
            } else {
                activeMeetings--;
                j++;
            }
            rooms = Math.Max(rooms, activeMeetings);
        }
        return rooms;
    }
}

}