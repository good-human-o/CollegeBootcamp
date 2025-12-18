#include<iostream> 

using namespace std;

int main(){
    int Array[] = {2, 6, 8, 3, 9};
    int n = 5;

    for(int i = 0; i < n; i++){
        cout<<Array[i]<<" ";
    }

    for(int i = 0; i < n/2; i++){
        int temp = Array[i];
        Array[i] = Array[n-i-1];
        Array[n-i-1] = temp;
    }

    cout << endl << "reversed array: ";

    for(int i = 0; i < n; i++){
        cout<<Array[i]<<" ";
    }

    return 0;
}