class Solution {
public:
    int majorityElement(vector<int>& nums) {
// Brute Force Approach-Time Complexity-o(n^2)
// int n=nums.size();
// int count=n/2;
// for(int i=0;i<n;i++){
//     int freq=0;
//     for(int j=0;j<n;j++){
//         if(nums[i]==nums[j]){
//             freq++;
//         }
//     }
//     if(freq>count){
//         return nums[i];
//     }
// }
// return -1;

//Better Approach time Complexity-o(nlogn)+o(n)
// loop running n times,and ordered map so o(nlogn)
// For traverse in map,it is o(n)
    //     int n=nums.size();
    //     int count=n/2;
    //     map<int,int> m;
    //     for(int i=0;i<n;i++){
    //         m[nums[i]]++;
    //     }

    //    for(auto it:m){
    //         if(it.second>count){
    //             return it.first;
    //         }
    //     }
    // return -1;
        
// Optimal Approach-Moore's voting Algorithm-Complexity o(n)
// Start with 1st(0th index) element,if it appears then increment count,else decrement
// If count=0,i.e.the element choosen is not majority one.So,Choose next one.(not the 1 index but from where u left ex.5)
// As 1 element is majority one i.e total 12 elements(7 times majority element + 5 others)Suppose 5 others got cancelled with 5 majority,so count remains 2 or more than that.
int n=nums.size();
int element;
int count=0;
for(int i=0;i<n;i++){
    if(count==0){
        element=nums[i];
        count++;
    }
    else if(nums[i]==element){
        count++;
    }
    else{
        count--;
    }
}
return element; //Here given majority element always exists in the array so return it.
// But if it is not given then,will check whether it is actually majority one or not(complexity o(2n) )
// int freq=0;
// for(int i=0;i<n;i++){
//     if(nums[i]==element) freq++;
// }
// if(freq>n/2){
//     return element;
// }
// return -1; //Majority element not exist

    }
};