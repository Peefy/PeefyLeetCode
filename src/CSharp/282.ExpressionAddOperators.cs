
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.ExpressionAddOperators
{

public class Solution {

    public List<string> answer;
    public string digits = "";
    public long target;

    private void recurse(int index, long previousOperand, long currentOperand, long value, Stack<string> ops) {
        var nums = this.digits;
        if (index == nums.Length) {
            if (value == this.target && currentOperand == 0) {
                this.answer.Add(string.Join("", ops.Reverse().Skip(1)));
            }
            return;
        }
        currentOperand = currentOperand * 10 + nums[index] - '0'; 
        var current_val_rep = currentOperand.ToString();

        if (currentOperand > 0) {
            recurse(index + 1, previousOperand, currentOperand, value, ops);
        }

        ops.Push("+");
        ops.Push(current_val_rep);
        recurse(index + 1, currentOperand, 0, value + currentOperand, ops);
        ops.Pop();
        ops.Pop();

        if (ops.Count > 0) {

            ops.Push("-");
            ops.Push(current_val_rep);
            recurse(index + 1, -currentOperand, 0, value - currentOperand, ops);
            ops.Pop();
            ops.Pop();

            ops.Push("*");
            ops.Push(current_val_rep);
            recurse(index + 1, currentOperand * previousOperand, 0,
                    value - previousOperand + (currentOperand * previousOperand), ops);
            ops.Pop();
            ops.Pop();
        }
    }

    public IList<string> AddOperators(string num, int target) {
        if (num.Length == 0) {
            return new List<string>();
        }

        this.target = target;
        this.digits = num;
        this.answer = new List<string>();
        this.recurse(0, 0, 0, 0, new Stack<string>());
        return this.answer;
    }
}

}