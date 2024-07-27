class Solution {
public:

// void Merge(vector<int> &nums,int low,int mid,int high){
//     int left=low;
//     int right=mid+1;
//     vector<int>temp;
//     while(left<=mid && right<=high){
//         if(nums[left]<=nums[right]){
//             temp.push_back(nums[left]);
//             left++;
//         }
//         else{
//             temp.push_back(nums[right]);
//             right++;
//         }
//     }
//     while(left<=mid){
//         temp.push_back(nums[left]);
//         left++;
//     }
//     while(right<=high){
//         temp.push_back(nums[right]);
//         right++;
//     }
//     for(int i=low;i<=high;i++){
//         nums[i]=temp[i-low]; //each time new temp arr is created so when we insert element it goes to 0 index
//     }

// }
// void MergeSort(vector<int> &nums,int low,int high){ //Recursive Function
//     if(low>=high)return;
//     int mid=(low+high)/2;
//     MergeSort(nums,low,mid);
//     MergeSort(nums,mid+1,high);
//     Merge(nums,low,mid,high);
// }
    void sortColors(vector<int>& nums) {
// Brute Force Approach-Using Merge Sort-Time Complexity o(nlogn)
// MergeSort(nums,0,nums.size()-1);


// Better Approach-Time Complexity o(2n)
        // map <int,int>m;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0) m[0]++;
        //     else if(nums[i]==1) m[1]++;
        //     else m[2]++;
        // }
        // for(int i=0;i<m[0];i++){
        //     nums[i]=0;
        // }
        // for(int i=m[0];i<m[0]+m[1];i++){
        //     nums[i]=1;
        // }
        // for(int i=m[0]+m[1];i<nums.size();i++){
        //     nums[i]=2;
        // }

// Optimal Approach-Dutch National Flag Algorithm-Time Complexity o(n)
// 0 to low-1 = 0
// low to mid-1 = 1
// mid to high = 0,1,2(unsorted)
// high+1 to n-1 = 2
int mid=0;
int low=0;
int high=nums.size()-1;
while(mid<=high){ //mid>high i.e.everything is sorted
    if(nums[mid]==0){
        swap(nums[low],nums[mid]);

        mid++;
        low++;
    }
    else if(nums[mid]==1){
        mid++;
    }
    else{
        swap(nums[mid],nums[high]);

        high--;
    }
}
    }
};