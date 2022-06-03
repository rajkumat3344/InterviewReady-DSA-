// Move all negative elements to end 
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int ans[n];
        int j = 0;

        // arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
        //positive number
        for(int i=0;i<n;i++){
            if(arr[i] >= 0){
                ans[j++] = arr[i];
            }
        }

        //negative number
         for(int i=0;i<n;i++){
            if(arr[i] < 0){
                ans[j++] = arr[i];
            }
        }

        for(int i=0;i<n;i++){
            arr[i] = ans[i];
        }    
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends