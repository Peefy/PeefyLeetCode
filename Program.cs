using System;
using System.IO;

namespace PeefyLeetCode
{
    class Program
    {
        static void Main(string[] args)
        {
            var filename = "test.md";
            var i = 1;
            var j = 13;
<<<<<<< HEAD
            
=======
>>>>>>> 2ef726c448357e2f40c237d9c7baf95afe6421ae
            while (i <= 10)
            {
                if (i == 1)
                {
                    File.AppendAllText(filename, $"## Problem {j}1 - Problem {j + 1}0\r\n\r\n");
                }
                if (i < 10)
                {
                    File.AppendAllText(filename, $"* #### Problem {j}{i} (Easy)\r\n");
                }
                if (i == 10)
                {
                    ++j;
                    File.AppendAllText(filename, $"* #### Problem {j}0 (Easy)\r\n");
                    File.AppendAllText(filename, "\r\n");
                    i = 0;
                    if(j >= 65)
                        break;
                }
                ++i;
            }
            Console.WriteLine("Hello World!");
        }
    }
}
