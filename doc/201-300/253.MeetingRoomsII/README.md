
# problem 253 : MeetingRoomsII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/253.MeetingRoomsII/problem.png"/>

## C++ Solution

```c++

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

```

## C# Solution

```csharp

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

```

## Java Solution

```java

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
        int[] starts = new int[intervals.length];
        int[] ends = new int[intervals.length];
        for (int i = 0; i < intervals.length; i++) {
            starts[i] = intervals[i].start;
            ends[i] = intervals[i].end;
        }
        Arrays.sort(starts);
        Arrays.sort(ends);
        int rooms = 0;
        int activeMeetings = 0;
        int i = 0, j = 0;
        while (i < intervals.length && j < intervals.length) {
            if (starts[i] < ends[j]) {
                activeMeetings++;
                i++;
            } else {
                activeMeetings--;
                j++;
            }
            rooms = Math.max(rooms, activeMeetings);
        }
        return rooms;
    }
}

```

## Python Solution

```python

class Interval:
    def __init__(self):
        self.start = 0
        self.end = 0

    def __init__(self, start, end):
        self.start = start
        self.end = end


class Solution:
    def minMeetingRooms(self, intervals):
        starts = []
        ends = []
        for interval in intervals:
            starts.append(interval.start)
            ends.append(interval.end)
        starts.sort()
        ends.sort()
        rooms = 0
        activeMeetings = 0
        i = 0
        j = 0
        while i < len(intervals) and j < len(intervals):
            if starts[i] < ends[j]:
                activeMeetings += 1
                i += 1
            else:
                activeMeetings -= 1
                j += 1
            rooms = max(rooms, activeMeetings)
        return rooms     

```




