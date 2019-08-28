
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.CourseSchedule
{
public class Solution {
    public bool CanFinish(int numCourses, int[][] prerequisites) {
        int[] indegrees = new int[numCourses];
        foreach (int[] cp in prerequisites) indegrees[cp[0]]++;
        List<int> queue = new List<int>();
        for(int i = 0; i < numCourses; i++){
            if(indegrees[i] == 0) queue.Add(i);
        }
        while(queue.Count != 0) {
            int pre = queue[0];
            queue.RemoveAt(0);
            numCourses--;
            foreach (int[] req in prerequisites) {
                if(req[1] != pre) continue;
                if(--indegrees[req[0]] == 0) 
                    queue.Add(req[0]);
            }
        }
        return numCourses == 0;
    }
}
}