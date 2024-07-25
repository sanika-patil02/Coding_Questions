// C++ STL provides a sort function that sorts a vector or array (items with random access)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
// Brute-Force Approach-both for returning yes-no & for returning index
//Time Complexity-o(n^2)
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //              return {i,j};
        //         }
        //     }

        // }
        // return {-1,-1};
 
// Optimal & Better for returning yes-no & for returning index
// Better(returning yes-no)Time Complexity=o(nlogn)
// map contains element as key & index as value
        int n=nums.size();
        map<int,int>m; 
        for(int i=0;i<n;i++){
            int rem=target-nums[i];
            if(m.find(rem)!= m.end()){
            return {i,m[rem]};
            }
            m[nums[i]]=i;
        }
        return {-1,-1};

// Optimal Approach (for returning yes-no,not used for returning index)
// Time Complexity=o(n)+o(nlogn),as loop runs entire arr & nlogn for sorting
// int n=nums.size();
// sort(nums.begin(),nums.end());
// int left=0;
// int right=n-1;
// while(left<right){
// if(nums[left]+nums[right]==target){
//     return "YES";
// }
// else if(nums[left]+nums[right]<target) left++;
// else right--;
// }
// return "NO";

    }
};