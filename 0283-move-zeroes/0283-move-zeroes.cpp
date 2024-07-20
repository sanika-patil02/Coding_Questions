class Solution {
public:
    void moveZeroes(vector<int>& nums) {
// time complexity=o(n)+o(x)

        // int count=0;
        // int j=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         count++;
        //     }
        //     else{
        //         nums[j++]=nums[i];
        //     }
        // }
        // int k=nums.size()-1;
        // for(int i=0;i<count;i++){
        //     nums[k]=0;
        //     k--;
        // }

        // Optimal Approach
        int j=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }

// j==-1 : In nums all are non zero elements
        if(j!=-1){
        for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=0){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j++;
            }
        }
    }
      
    
        // time complexity=o(n)
        
    }
};