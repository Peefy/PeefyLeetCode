
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.IsLongPressedName
{
public class RecentCounter {

    Queue<int> q;
    public RecentCounter() {
        q = new Queue<int>();
    }
    
    public int Ping(int t) {
        q.Enqueue(t);
        while (t - q.Peek() > 3000){
            q.Dequeue();
        }
        return q.Count;
    }
}
}

