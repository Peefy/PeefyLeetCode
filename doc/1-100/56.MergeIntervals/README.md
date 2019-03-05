
# Problem 56 : MergeIntervals

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/56.MergeIntervals/problem.png"/>

## C++ Solution

合并区间的贪心算法，使用区间开头的排序

```c++

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

```

## C# Solution

```csharp

public class Interval {
    public int start;
    public int end;
    Interval() { start = 0; end = 0; }
    Interval(int s, int e) { start = s; end = e; }
}

    public class IntervalCompare : IComparer<Interval>
    {
        public int Compare(Interval x, Interval y)
        {
            return x.start - y.start;
        }
    }

    public class Solution {
    public IList<Interval> Merge(IList<Interval> intervals) {
        List<Interval> ret = new List<Interval>();
        ret.Sort(new IntervalCompare());
        foreach (Interval temp in intervals) {
            if(ret.Count == 0 || ret.Last().end < temp.start)
                ret.Add(temp);
            else
                ret.Last().end = Math.Max(ret.Last().end, temp.end);
        }
        return ret; 
    }

```

## Java Solution

```java

class Solution {
    public List<Interval> merge(List<Interval> intervals) {
        LinkedList<Interval> ret = new LinkedList<>();
        Collections.sort(intervals, (a, b) -> (a.start - b.start));
        for(Interval temp : intervals) {
            if(ret.isEmpty() || ret.peekLast().end < temp.start)
                ret.add(temp);
            else
                ret.peekLast().end = Math.max(ret.peekLast().end, temp.end);
        }
        return ret; 
    }
}

```

## Python Solution

```python

class Solution:
    def merge(self, intervals):
        intervals = [[x.start, x.end] for x in intervals]
        intervals.sort(key=lambda x: (x[0], x[1]))
        i = 1
        while i < len(intervals):
            if intervals[i][0] <= intervals[i-1][1]:
                intervals[i-1][0] = min(intervals[i][0], intervals[i-1][0])
                intervals[i-1][1] = max(intervals[i][1], intervals[i-1][1])
                del intervals[i]
            else:
                i += 1
        return intervals

```


