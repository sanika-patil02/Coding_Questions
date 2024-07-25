//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
    //   int flag=0;
    //   for(int i=0;i<N;i++){
    //       if(arr[i]==K){
    //           flag=1;
    //           break;
    //       }
    //       else{
    //             flag=0;
    //       }
           
    //   }
    //   if(flag==1){
    //       return 1;
    //   }
    //   else{
    //       return -1;
    //   }
    
    for(int i=0;i<N;i++){
        if(arr[i]==K){
            return 1;    
//If it does not go in this loop means there is no such element
// exists in arr so return -1
        }
    }
    return -1;
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends