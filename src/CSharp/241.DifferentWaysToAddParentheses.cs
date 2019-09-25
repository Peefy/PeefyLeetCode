
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.DifferentWaysToAddParentheses
{

public class Solution {
    public List<int> partition(String input) {
        List<int> result = new List<int>();
        if (!input.Contains("+") && !input.Contains("-") && !input.Contains("*")) {
            result.Add(int.Parse(input));
            return result;
        }
        for(int i = 0; i < input.Length; i++) {
            if (input[i] == '+' || input[i] == '-' || input[i] == '*') {
                foreach (var left in partition(input.Substring(0, i))) {
                    foreach (var right in partition(input.Substring(i + 1))) {
                        if (input[i] == '+') {
                            result.Add(left + right);
                        } else if (input[i] == '-') {
                            result.Add(left - right);
                        } else if (input[i] == '*') {
                            result.Add(left * right);
                        }
                    }
                }
            }
        }
        return result;
    }
    public IList<int> DiffWaysToCompute(string input) {
        return partition(input);
    }
}
}