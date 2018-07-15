namespace PeefyLeetCode.IsHappyNumber
{
public class Solution {
    public bool IsHappy(int n) {
        if (n == 1)
        {
            return true;
        }
        if (n == 4)
        {
            return false;
        }
        int happy = 0;
        while (n > 0) {
            int c = n % 10;
            n = n / 10;
            happy += c * c;
        }
        return IsHappy(happy);
    }
}
}