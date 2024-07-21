class Solution {
public:
    int missingNumber(vector<int>& nums) {
     // More Otimal Approach:time complexity-o(n)   
     int n=nums.size();
     int xor1=0;
     int xor2=0;
     for(int i=0;i<n;i++){
        xor1=xor1 ^ (i+1);
        xor2=xor2 ^ (nums[i]);
     }
     return xor1 ^ xor2;

        // Otimal Approach:time complexity-o(n)
        // int n,s2,sum;
        // n=nums.size();
        // s2=0;
        // sum=(n*(n+1))/2;
        // for(int i=0;i<n;i++){
        //     s2=s2+nums[i];
        // }
        // if(sum==s2){
        //     return 0;
        // }
        // else{
        //     return sum-s2;
        // }

// Brute-Force:Complexity o(n^2)
    //     int n=nums.size();
    //     int i,j,flag;
    //     for(i=0;i<n;i++){
    //         flag=0;
    //         for(j=0;j<n;j++){
    //             if(i==nums[j]){
    //                 flag=1;
    //                 break;
    //             }
    //         }
    //         if(flag==0){
    //             return i;
    //         }
    //     }
    // return n;

// Better Approach:Complexity o(2n)
    // int n=nums.size();
    // vector<int>hash(n+1,0);
    //     for(int i=0;i<n;i++){
    //         hash[nums[i]]=1;
    //     }
    //     for(int i=0;i<n;i++){
    //         if(hash[i]==0){
    //             return i;
    //         }
    //     }
    //     return n;

    }
};

