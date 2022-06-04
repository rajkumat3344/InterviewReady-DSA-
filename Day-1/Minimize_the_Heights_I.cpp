// Minimize the Heights I 

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
         sort(arr, arr+n);
        // code here
        int res = arr[n-1] - arr[0];
        int smallest = arr[0]+k;
        int largest = arr[n-1]-k;

        for(int i=1;i<n;i++){
            int min_ = min(arr[i]-k, smallest);
            int max_ = max(arr[i-1]+k, largest);
            res = min(res, max_- min_);
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends