#include<iostream>

using namespace std;

int main(){

    int Array[] = {2, 8, 13, 15,20};
    int n = 5;

    int k = 28;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(Array[i] + Array[j] == k){
            cout << Array[i] << " + " << Array[j] << " = " << Array[i] + Array[j] << endl; 
            break;
            }
        }
    }

    return 0;
}