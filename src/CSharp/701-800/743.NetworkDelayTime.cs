using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.NetworkDelayTime
{
    public class Solution
    {
        public int NetworkDelayTime(int[,] times, int N, int K)
        {
            // -- gen graph ---
            int[,] graph = new int[N, N];
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (i == j) graph[i,j] = 0;
                    else graph[i,j] = int.MaxValue;
                }
            }

            for (int i = 0; i < times.GetLength(0); i++)
            {
                int start = times[i, 0];
                int end = times[i, 1];
                graph[start - 1, end - 1] = times[i, 2];
            }

            // --- gen dis array
            int[] distance = new int[N];
            for (int i = 0; i < N; i++)
            {
                distance[i] = graph[K - 1, i];
            }

            bool[] resolved = new bool[N];
            resolved[K - 1] = true;

            int min = int.MaxValue;
            int candidate = -1;
            for (int i = 0; i < N; i++)
            {
                if (!resolved[i] && min > distance[i])
                {
                    min = distance[i];
                    candidate = i;
                }
            }

            while (candidate >= 0)
            {
                resolved[candidate] = true;
                for (int i = 0; i < N; i++)
                {
                    if (!resolved[i] && graph[candidate,i] < int.MaxValue)
                    {
                        if (distance[i] > distance[candidate] + graph[candidate,i])
                        {
                            distance[i] = distance[candidate] + graph[candidate,i];
                        }
                    }
                }

                min = int.MaxValue;
                candidate = -1;
                for (int i = 0; i < N; i++)
                {
                    if (!resolved[i] && min > distance[i])
                    {
                        min = distance[i];
                        candidate = i;
                    }
                }
            }

            int result = 0;
            for (int i = 0; i < N; i++)
            {
                if (distance[i] > result)
                {
                    result = distance[i];
                }
            }

            return (result < int.MaxValue) ? result : -1;
        }
    }
}

