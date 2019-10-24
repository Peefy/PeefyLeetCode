
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.PeekingIterator
{

public class Iterator<T>
{
    public virtual bool HasNext()
    {
        return false;
    }

    public virtual int Next()
    {
        return -1;
    }

}


public class PeekingIterator : Iterator<int> {
    int cur;
    List<int> res;

    public PeekingIterator(Iterator<int> itr) {
        res = new List<int>();
        while (itr.HasNext()) {
            res.Add(itr.Next());
        }
    }

    public int Peek() {
        if (res.Count == 0 || cur >= res.Count) {
            return -100000;
        }
        return res[cur];
    }

    public override int Next() {
        int result = -100000;
        if (cur < res.Count) {
            result = res[cur++];
        }
        return result;
    }

    public override bool HasNext() {
        bool result = false;
        if (cur < res.Count) {
            result = true;
        }
        return result;
    }
}

}