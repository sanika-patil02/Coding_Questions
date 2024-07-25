class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
// Brute Force Approach-Time Complexity=o(n^2)
        // int n=nums.size();
        // int count=0;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum=sum+nums[j];
        //         if(sum==k){
        //             count++;
        //         }

        //     }
        // }
        // return count;

// Optimal Approach-Time Complexity-o(n*logn),here loop runs n times and worst case TC of ordered map=log n
// If we use unordered map then TC=1 average & best case,but worst case=n
// map stores presum and count of its occurance
map<int,int>m;
int n=nums.size();
int sum=0;
int count=0;
m[0]=1;
for(int i=0;i<n;i++){
    sum=sum+nums[i];
    int preSum=sum-k;
    if(m.find(preSum) != m.end()){   
        count=count+m[preSum];
    }
    m[sum]++;
}
return count;  

// OR
// map<int,int>m;
// int n=nums.size();
// int sum=0;
// int count=0;
// m[0]=1;
// for(int i=0;i<n;i++){
//     sum=sum+nums[i];
//     int preSum=sum-k;
//     count=count+m[preSum];
//     m[sum]++;
// }
// return count;  
    }
};