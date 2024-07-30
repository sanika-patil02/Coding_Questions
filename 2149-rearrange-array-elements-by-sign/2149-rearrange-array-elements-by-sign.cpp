class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
// Brute Force Approach-Time Complexity o(n+n/2)
// Space Complexity o(n)
        // int n=nums.size();
        // vector<int>positive;
        // vector<int>negative;
        // for(int i=0;i<n;i++){
        //     if(nums[i]>0){
        //         positive.push_back(nums[i]);
        //     }
        //     else{
        //         negative.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<n/2;i++){
        //     nums[2*i]=positive[i];
        //     nums[2*i+1]=negative[i];
        // }
        // return nums;

// Optimal Approach-Time Complexity o(n)
// Space Complexity o(n)
        int n=nums.size();
        vector<int>v(n,0);
        int pos_index=0;
        int neg_index=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                v[pos_index]=nums[i];
                pos_index=pos_index+2;
            }
            else{
                v[neg_index]=nums[i];
                neg_index=neg_index+2;
            }
        }
        return v;

// If positives are not equal to negatives
// (If any of the +ve & -ve no are left,add them at end without altering order)
// Brute Force Approach-Worst case time complexity o(2n)(If all no are +ve or -ve)
// int n=nums.size();
// vector<int>positive;
// vector<int>negative;
// for(int i=0;i<n;i++){
//     if(nums[i]>0){
//         positive.push_back(nums[i]);
//     }
//     else{
//         negative.push_back(nums[i]);
//     }
// }
// if(positive.size() > negative.size()){
//     for(int i=0;i<negative.size();i++){
//     nums[2*i]=positive[i];
//     nums[2*i+1]=negative[i];
//     }
//     int index=negative.size() * 2;
//     for(int j=negative.size();j<positive.size();j++){
//         nums[index]=positive[j];
//         index++;
//     }
// }
// else{
//     for(int i=0;i<positive.size();i++){
//     nums[2*i]=positive[i];
//     nums[2*i+1]=negative[i];
//     }
//      int index=positive.size() * 2;
//     for(int j=positive.size();j<negative.size();j++){
//         nums[index]=negative[j];
//         index++;
//     }
// } 

// return nums;
        
    }
};