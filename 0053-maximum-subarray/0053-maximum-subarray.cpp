class Solution {
public:
    int maxSubArray(vector<int>& nums) {
// Brute Force pproach-Time Complexity o(n^3)
        // int n=nums.size();
        // int maxi=INT_MIN;
        // for (int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int sum=0;
        //         for(int k=i;k<=j;k++){
        //             sum=sum+nums[k];
        //         }
        //         maxi=max(maxi,sum);
        //     }
        // }
        // return maxi;

// Better Approach-Time Complexity o(n^2)
        // int n=nums.size();
        // int maxi=INT_MIN;
        // for (int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum=sum+nums[j];
        //         maxi=max(maxi,sum);
        //     }
        // }
        // return maxi;

// Optimal Approach-Kadane's Algorithm-Time Complexity o(n)
int n=nums.size();
int sum=0;
int maxi=INT_MIN;
for(int i=0;i<n;i++){
    sum=sum+nums[i];
    maxi=max(sum,maxi);
    if(sum<0) sum=0; //If sum<0,then do not carry that element further b/z it will reduce sum.
    
}
return maxi;

// Print any of those subarray with maximum sum
// int n=nums.size();
// int sum=0;
// int maxi=INT_MIN;
// int start;
// int ans_start=-1;
// int ans_end=-1;
// for(int i=0;i<n;i++){
//     if (sum==0) start=i; //Whenever I start forming new subarray with sum>0,I start with sum=0
//     sum=sum+nums[i];
//     if(sum>maxi){
//         maxi=sum;
//         ans_start=start;
//         ans_end=i;
//     }
//     if(sum<0) sum=0; //If sum<0,then do not carry that element further b/z it will reduce sum. 
// }
// //If mentioned,Find sum of subarray including empty subarray
// // EX.{-4,-2,-3,-1} i.e if we do not find subarray with sum>0,then return 0 i.e empty subarray
// // if(maxi<0){   
// //     return 0; 
// // }
// return maxi;
        
        
    }
};