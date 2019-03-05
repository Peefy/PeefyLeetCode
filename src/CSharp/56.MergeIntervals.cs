using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.MergeIntervals
{

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
}
}