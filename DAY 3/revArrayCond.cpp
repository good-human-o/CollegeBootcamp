#include<iostream>

using namespace std;

void revArray(int l, int r, int Arr[], int n){
    while(l < r){
        int temp = Arr[l];
        Arr[l] = Arr[r];
        Arr[r] = temp;
        l++;
        r--;
    }

    cout << endl << "reversed array: ";

    for(int i = 0; i < n; i++){
        cout<<Arr[i]<<" ";
    }

}

int main(){

    int Array[] = {5, 2, 6, 3, 7, 4, 9};
    int n = 7;

    for(int i = 0; i < n; i++){
        cout<<Array[i]<<" ";
    }

    revArray(1, 5, Array, n);

    return 0;
}