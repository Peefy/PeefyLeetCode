using System;
using System.IO;

namespace PeefyLeetCode
{
    class Program
    {
        static void Main(string[] args)
        {
            var filename = "name.txt";
            int i = 1;
            int k = 0;
            while (i < 1001)
            {
                if (k == 0){
                    File.AppendAllText(filename, $"\r\n## Problem {i} - Problem {i + 9}\r\n\r\n");
                }
                File.AppendAllText(filename, $"* #### Problem {i++} (Easy)\r\n");
                if (++k >= 10)
                {
                    k = 0;
                }
            }
        }
    }
}
