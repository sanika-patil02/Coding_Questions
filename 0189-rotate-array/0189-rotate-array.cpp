// reverse() is a predefined function in header file algorithm.It reverses the order of the elements in the range [first, last) of any container. The time complexity is O(n). 
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // vector<int> arr=nums;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     nums[(i+k)%n]=arr[i];
        // }
        // Here time complexity=o(n)
        // extra space =o(n)
        
        int n=nums.size();

        if(k>=n){
            k=k%n;
        }
        if(k>0){
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());   
        }
        // here time complexity=o(2n)
        // extra space =o(1)

    }
};