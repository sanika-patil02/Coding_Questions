class Solution {
public:
    int trap(vector<int>& height) {
// Time-complexity=o(3n)
// Space-complexity=o(2n)
    //     int total=0;
    //     // prefix-max:Max of all elements till that index
    //     int n=height.size();
    //     int prefix_arr[n];
    //     prefix_arr[0]=height[0];
    //     for(int i=1;i<n-1;i++){
    //         prefix_arr[i]=max(prefix_arr[i-1],height[i]);
    //     }

    //     //  suffix-max:Max of all elements to the rightmost of that index
    //     int suffix_arr[n];
    //     suffix_arr[n-1]=height[n-1];
    //     for(int i=n-2;i>=0;i--){
    //         suffix_arr[i]=max(suffix_arr[i+1],height[i]);
    //     }

    // int leftmax,rightmax;
    //     for(int i=0;i<n;i++){
    //         leftmax=prefix_arr[i];
    //         rightmax=suffix_arr[i];
    //         if(height[i]<leftmax && height[i]<rightmax){
    //             total=total+min(leftmax,rightmax)-height[i];
    //         }

    //     }
    // return total;

//OR

// Time-complexity=o(2n)
// Space-complexity=o(n)

    //  suffix-max:Max of all elements to the rightmost of that index
        int total=0;
        int n=height.size();
        int suffix_arr[n];
        suffix_arr[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            suffix_arr[i]=max(suffix_arr[i+1],height[i]);
        }

    int leftmax=height[0],rightmax;
        for(int i=0;i<n;i++){
            leftmax=max(leftmax,height[i]);
            rightmax=suffix_arr[i];
            if(height[i]<leftmax && height[i]<rightmax){
                total=total+min(leftmax,rightmax)-height[i];
            }

        }
    return total;
 
    }
};