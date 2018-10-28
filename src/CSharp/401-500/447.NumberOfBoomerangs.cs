using System;
using System.Collections.Generic;

namespace PeefyLeetCode.NumberOfBoomerangs
{
public class Solution {
    public int Distance(int[,] points, int index1, int index2){
        int dx = points[index1, 0] - points[index2, 0];
        int dy = points[index1, 1] - points[index2, 1];
        return dx * dx + dy * dy;
    }
    public int NumberOfBoomerangs(int[,] points) {
        int count = 0;
        int n = points.Length;
        Dictionary<int, int> hash = new Dictionary<int, int>();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    continue;
                }
                int dis = Distance(points, i, j);
                if (hash.ContainsKey(dis) == false) {
                    hash.Add(dis, 1);
                }
                else{
                    int val = hash[dis];
                    hash.Remove(dis);
                    hash.Add(dis, val + 1);
                }
                foreach (var c in hash.Values) {
                    count += c * (c - 1);
                }
                hash.Clear();
            }
        }
        return count;
    }
}

}