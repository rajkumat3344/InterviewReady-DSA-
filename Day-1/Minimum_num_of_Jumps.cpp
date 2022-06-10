// Minimum number of jumps
/*
N = 11 
arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
Output: 3 
*/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        //Case 1: Base Case
        if(n<=1) return 0;

        //Case 2: Not able to reach end
        if(arr[0] == 0) return -1;

        int currMaxReach = arr[0];
        int stepsCount = arr[0];
        int jump = 1;
        for(int start = 1; start < n; start++){
            //Case4: We reached end return jump
            if(start == n - 1) return jump;
            currMaxReach = max(currMaxReach, start + arr[start]);
            stepsCount = stepsCount - 1;
            if(stepsCount == 0){
                jump = jump + 1;
                //Case 3: index get greater then MaxReached
                if(start >= currMaxReach) return -1;
                stepsCount = currMaxReach - start;
            }
        }
        return -1;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends