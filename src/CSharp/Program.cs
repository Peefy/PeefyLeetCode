using System;

/// <summary>
/// cd src/CSharp
/// dotnet run
/// </summary>
namespace CSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            var solution = new TwoSumSolution.Solution();
            var result = solution.TwoSum(new int[]{2,7,11,3},9);
            Console.WriteLine(result[0]);
            Console.WriteLine(result[1]);
            var solution7 = new IntegerReverseSolution.Solution();
            Console.WriteLine(solution7.Reverse(-123));
            Console.WriteLine("Hello World!");
            Console.ReadLine();
        }
    }
}
