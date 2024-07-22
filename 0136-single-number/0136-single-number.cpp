class Solution {
public:
    int singleNumber(vector<int>& nums) {
// Brute-Force
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
        
        // int xor1=0;
        // for(int i=0;i<nums.size();i++){
        //     xor1=xor1 ^ nums[i];
        // }
        // return xor1;
    }
};