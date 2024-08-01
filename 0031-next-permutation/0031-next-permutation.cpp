// In stl their is function called next_permutation
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // Brute Force Approach-o(n! * n)
        // 1.generate all permutations in sorted order(recursion)        
        // 2.search given permutation using linear search
        // 3.Find next perutation

        // Better Approach
        // next_permutation(nums.begin(),nums.end());

        // Optimal Approach-Time Complexity o(3n)
        // How next_permutation works internally?
        // ex.2 1 5 4 3 0 0 
        // 1.Longer prefix match,a[i]<a[i+1],here 2
        // 2.Find someone > 1,i.e.a[i],but the smallest one so that u stay close
        // 3.Try to place remaining in sorted order

        int n=nums.size();
        int index=-1;
        for(int i=n-2;i>=0;i--){  //Longest prefix match
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){    
// If arr does not have a lexicographical larger rearrangement,array must be rearranged as the lowest possible order (i.e., sorted in ascending order).
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i=n-1;i>index;i--){ //Find someone > 1,i.e.a[index],but the smallest one so that u stay close
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }

// After swapping also the elements from index+1 to end are in descending order
        reverse(nums.begin()+index+1,nums.end());    
    }
};