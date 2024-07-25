//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
// Complete the function
// subarray-Contiguous part of array
// subsequence-non contiguous members of array form subsequence
// Brute Force Aproach(+ve & -ve)Time Complexity-o(n^2)
        // int len=0;
        // int sum;
        // for(int i=0;i<N;i++){
        //     sum=0;
        //     for(int j=i;j<N;j++){
        //         sum=sum+A[j];
        //         if(sum==K){
        //             len=max(len,j-i+1);
        //         }
                
        //     }
        // }
        // return len;
        
// Better Approach for arr containing +ve no. only
// here key=sum & value=index
        // map<int,int>preSumMap;
        // int len=0;
        // int sum=0;
        // for(int i=0;i<N;i++){
        //     sum=sum+A[i];
        //     if(sum==K){
        //         len=max(len,i+1);
        //     }
        //     int rem=sum-K;         //if sum>K
        //     if(preSumMap.find(rem) != preSumMap.end()){
        //         len=max(len,i-preSumMap[rem]);
        //     }
        //     preSumMap[sum]=i;    
        // }
        // return len;
        
// Optimal Approach for arr containing +ve & 0 
// complexity=o(2n)
        // int i=0;
        // int j=0;
        // int sum=0;
        // int len=0;
        // while(j<N){
        //     sum=sum+A[j];
        //     while(i<=j && sum>K){
        //         sum=sum-A[i];
        //         i++;
        //     }
        //     if(sum==K){
        //         len=max(len,j-i+1);
        //     }
        //     j++;
            
        // }
        // return len;
        
// Optimal Approach for arr containing +ve & -ve no.
// Time Complexity-o(nlogn)
        map<int,int>preSumMap;
        int len=0;
        int sum=0;
        for(int i=0;i<N;i++){
            sum=sum+A[i];
            if(sum==K){
                len=max(len,i+1);
            }
            int rem=sum-K;         //if sum>K
            if(preSumMap.find(rem) != preSumMap.end()){  //if key==rem present in map
                len=max(len,i-preSumMap[rem]);
            }
            if(preSumMap.find(sum) == preSumMap.end()) //if key==rem is not present in map
            preSumMap[sum]=i;    //if key==sum not present in map then it returns an 
        }                       //iterator pointing to index followed by last index
      return len;

        
        
}
};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends