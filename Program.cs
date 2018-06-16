using System;

namespace PeefyLeetCode
{
    class Program
    {
        static void Main(string[] args)
        {
            var solution1 = new TwoSum.Solution();
            Console.WriteLine(solution1.TwoSum(new int[]{1,2,3,4}, 7));
            var solution2 = new CountAndSay.Solution();
            Console.WriteLine(solution2.CountAndSay(5));
            Console.WriteLine("Hello World!");
        }
    }
}
