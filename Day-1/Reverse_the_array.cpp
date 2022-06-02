// Reverse the array
#include <iostream>
using namespace std;

int main(){
    //Time Complexity O(N) and Space Complexity O(1)
    int arr[] = {4, 5, 1, 2};
    int size = sizeof(arr)/sizeof(int);

    for(int i=size-1;i>=0;i--){
        cout << arr[i] << " ";
    }
    return 0;
}