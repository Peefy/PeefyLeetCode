
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.ZigzagIterator
{

public class ZigzagIerator {
    List<List<int>> vectors = new List<List<int>>();
    int row, col, max;
    public ZigzagIerator(List<int> v1, List<int> v2) {
        vectors.Add(v1);
        vectors.Add(v2);
        max = Math.Max(v1.Count, v2.Count);
    }

    public int Next() {
        HasNext();
        return vectors[row++][col];
    }

    public bool HasNext() {
        while (col < max) {
            while (row < vectors.Count) {
                if (col < vectors[row].Count)
                    return true;
                row += 1;
            }
            row = 0;
            col += 1;
        }
        return false;
    }
}

}