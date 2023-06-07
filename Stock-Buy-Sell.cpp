#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int profit=0,minE=INT_MAX;
    for(auto it:prices)
    {
        minE = min(minE,it);
        profit = max(profit,it-minE);
    }

    return profit;
}