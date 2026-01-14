#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, bestBuy = prices[0];

        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] > bestBuy)
            {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }

    //SECOND APPROACH
    // int maxProfit(vector<int>& prices) {
    //     int minPrice = prices[0];
    //     int maxProfit = 0;

    //     for (int i = 1; i < prices.size(); i++) {
    //         if (prices[i] < minPrice) {
    //             minPrice = prices[i];
    //         } else {
    //             int profit = prices[i] - minPrice;
    //             if (profit > maxProfit) {
    //                 maxProfit = profit;
    //             }
    //         }
    //     }

    //     return maxProfit;
    // }

int main()
{
    vector<int> prices = {7, 2, 1, 20, 19};
    cout << maxProfit(prices);
    return 0;
}