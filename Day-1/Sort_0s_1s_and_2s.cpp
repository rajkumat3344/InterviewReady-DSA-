// Sort an array of 0s, 1s and 2s
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
   //arr[]= {0 2 1 2 0}
   int left = 0, mid = 0, right = n - 1;
   while(mid <= right){
       if(a[mid] == 0){
           int temp = a[left];
           a[left] = a[mid];
           a[mid] = temp;
           left = left + 1;
           mid = mid + 1;
       }
       else if(a[mid] == 1){
           mid = mid + 1;
       }
       else{
           int temp = a[mid];
           a[mid] = a[right];
           a[right] = temp;
           right = right - 1;
       }
   }
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends