using System;
using System.Collections.Generic;

namespace PeefyLeetCode.GuessNumber
{
    public abstract class GuessGame
    {
        public virtual int Guess(int num);
    }
public class Solution : GuessGame {
    public int GuessNumber(int n) {
        int left = 1;
        int right = n;
        while (left <= right){
            int middle = left + (right - left) / 2;
            int num = middle;
            if (Guess(num) == 0)
                return num;
            if (Guess(num) == 1)
                left = middle + 1;
            if (Guess(num) == -1)
                right = middle - 1;
        }
        return left;
    }
}
}