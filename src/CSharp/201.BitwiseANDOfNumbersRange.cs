namespace PeefyLeetCode.RangeBitwiseAnd
{
public class Solution {
    public int RangeBitwiseAnd(int m, int n) {
        int count = 0; 
        while (m != n){
            m >>= 1;
            n >>= 1;
            count++;
        }
        return n << count;
    }
}
}