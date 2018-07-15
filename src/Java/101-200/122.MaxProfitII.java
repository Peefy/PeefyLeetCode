
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;

class Solution {
    public int maxProfit(int[] prices) {
        int profit = 0;
        for (int i = 1;i < prices.length;++i){
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }      
        }
        return profit;
    }
}
