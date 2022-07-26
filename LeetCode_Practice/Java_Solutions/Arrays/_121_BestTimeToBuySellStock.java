package LeetCode_Practice.Java_Solutions.Arrays;

public class _121_BestTimeToBuySellStock {
    public int maxProfit(int[] prices) {
        int lower = Integer.MAX_VALUE;
        int profit = 0, currProfit = 0;
        for (int i=0; i < prices.length; i++) {
            if (prices[i] < lower)
                lower = prices[i];
            currProfit = prices[i] - lower;
            if (profit < currProfit)
                profit = currProfit;
        }
        return profit;
    }
}
