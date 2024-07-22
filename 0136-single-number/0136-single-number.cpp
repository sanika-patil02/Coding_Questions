class Solution {
public:
    int singleNumber(vector<int>& nums) {
// Brute-Force Approach:Time Complexity=o(n^2)
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(num==nums[j]){
                    count++;
                }
            }
            if(count==1){
                return num;
            }
        }
        return -1;
        
// Better Solution
        // int n=nums.size();
        // vector<int>hash((n+1)/2,0);
        // for(int i=0;i<n;i++){
        //     hash[nums[i]]++;
        // }
        // for(int i=0;i<n;i++){
        //     if(hash[i]==1){
        //         return i;
        //     }
        // }
        // return -1;
        
       
        
        
// Optimal (Time Complexity=o(n))        
        // int xor1=0;
        // for(int i=0;i<nums.size();i++){
        //     xor1=xor1 ^ nums[i];
        // }
        // return xor1;
    }
};