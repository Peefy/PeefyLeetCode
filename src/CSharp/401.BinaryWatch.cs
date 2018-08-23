using System;
using System.Collections.Generic;

namespace PeefyLeetCode.BinaryWatch {
    public class Solution {
        public static int[] time = new int[] { 8, 4, 2, 1, 32, 16, 8, 4, 2, 1 };
        public static int n = 0;
        public IList<string> ReadBinaryWatch(int num) {
            List<String> res = new List<String> ();
            bool[] temp = new bool[10];
            n = num;
            dfs (res, temp, 0, 0);
            return res;
        }
        private static void dfs (List<String> res, bool[] temp, int count, int p) {
            if (count == n) {
                String str = getBinaryValue (temp);
                if (!"".Equals (str))
                    res.Add (str);
                return;
            } else {
                while (p < 10) {
                    temp[p] = true;
                    dfs (res, temp, count + 1, p + 1);
                    temp[p] = false;
                    p++;
                }
            }
        }
        private static String getBinaryValue (bool[] temp) {
            int h = 0;
            int m = 0;
            for (int i = 0; i < 4; i++)
                if (temp[i])
                    h += time[i];
            for (int i = 4; i < 10; i++)
                if (temp[i])
                    m += time[i];
            if (h > 11 || m > 59)
                return "";
            if (m < 10)
                return "" + h + ":" + "0" + m;
            return "" + h + ":" + m;

        }
    }
}