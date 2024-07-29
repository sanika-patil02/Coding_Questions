class Solution {
public:
    int maxProfit(vector<int>& prices) {
// Brute Force Approach-Time Complexity o(n^2)
        // int diff;
        // int n=prices.size();
        // int maxi=0;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         diff=prices[j]-prices[i];
        //         maxi=max(maxi,diff);
        //     }
        // }
        // return maxi;

// Optimal Approach-Time Complexity o(n)
// If u r selling on ith day u buy on minimum price from 1st day to i-1 th day
int n=prices.size();
int profit=0;
int mini=prices[0];
for(int i=1;i<n;i++){
    int diff=prices[i]-mini;
    profit=max(diff,profit);
    mini=min(mini,prices[i]);
}
return profit;
        
    }
};