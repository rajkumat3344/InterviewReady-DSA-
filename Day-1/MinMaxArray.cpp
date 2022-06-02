// Find the maximum and minimum element in an array
#include <iostream>
using namespace std;

int getMin(int arr[], int size){
    int Min = INT_MAX;
    for(int i=0;i<size;i++){
        if(Min > arr[i]){
            Min = arr[i];
        }
    }
    return Min;
}

int getMax(int arr[], int size){
    int Max = INT_MIN;
    for(int i=0;i<size;i++){
        if(Max < arr[i]){
            Max = arr[i];
        }
    }
    return Max;
}

int main(){
    int arr[] = {12, 2, 5, 8, 7, 10};
    int size = sizeof(arr)/sizeof(int);

    cout << "Array\n";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    int Max = getMax(arr, size);
    int Min = getMin(arr, size);

    cout << "Max : " << Max;
    cout << endl;
    cout << "Min : " << Min;
    return 0;
}