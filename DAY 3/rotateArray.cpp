#include<iostream>

using namespace std;

void revArray(int l, int r, int Arr[]){
    while(l < r){
        int temp = Arr[l];
        Arr[l] = Arr[r];
        Arr[r] = temp;
        l++;
        r--;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rotate(int k, int arr[], int n){
    k = k % n;
    if(k < 0) 
        k += n;

    // cout << "after reversing whole array: ";
    revArray(0, n-1, arr);
    // printArray(arr, n);

    // cout << "after reversing first k elements: ";
    revArray(0, k-1, arr);
    // printArray(arr, n);

    revArray(k, n-1, arr);
    cout << "rotated array: ";
    printArray(arr, n);
}

int main(){
    int Array[] = {5, 7, 8, 3, 4};
    int n = 5;
    int k = 3;

    cout << "original array: ";
    printArray(Array, n);

    rotate(k, Array, n);

    return 0;
}