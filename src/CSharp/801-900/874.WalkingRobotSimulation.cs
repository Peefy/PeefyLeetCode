
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.RobotSim
{
public class Solution {
    public int RobotSim(int[] commands, int[][] obstacles) {
        int x = 0;
        int y = 0;
        int xdelta = 0;
        int ydelta = 1;
        int dis = 0;
        HashSet<KeyValuePair<int, int> > s = new HashSet<KeyValuePair<int, int>>();
        foreach (var obstacle in obstacles){
            s.Add(new KeyValuePair<int, int>(obstacle[0], obstacle[1])); 
        }
        foreach (int command in commands){
            if (command == -2){
                int lastxdelta = xdelta;
                int lastydelta = ydelta;
                xdelta = -lastydelta;
                ydelta = lastxdelta;
            }
            else if (command == -1){
                int lastxdelta = xdelta;
                int lastydelta = ydelta;
                xdelta = lastydelta;
                ydelta = -lastxdelta;
            }
            else{
                for(int i = 0; i < command; i++){
                    x += xdelta;
                    y += ydelta;
                    if (s.Contains(new KeyValuePair<int, int>(x, y)) == true){
                        x -= xdelta;
                        y -= ydelta;
                    }
                    dis = Math.Max(dis, x * x + y * y);
                }
            }
        }
        return dis;
    }
}
}

