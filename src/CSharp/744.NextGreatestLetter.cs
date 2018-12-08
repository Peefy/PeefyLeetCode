using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.NextGreatestLetter
{
public class Solution {
    public char NextGreatestLetter(char[] letters, char target) {
        int n = letters.Length;
        if (target >= letters[n - 1]) {
            return letters[0];
        }
        int l = 0;
        int r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (letters[mid] > target)
                r = mid - 1;
            else if(letters[mid] < target)
                l = mid + 1;
            else{
                while (letters[mid] == target)
                    mid += 1;
                return letters[mid];
            }
        }
        return letters[l];
    }
}
}

