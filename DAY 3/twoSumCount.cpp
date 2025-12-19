#include<iostream>

using namespace std;

int main(){

    int Array[] = {2, 8, 13, 15,20};
    int n = 5;
    int count = 0;
    int k = 28;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(Array[i] + Array[j] == k){
            count++; 
            break;
            }
        }
    }

    cout << "total number of pairs: " << count << endl;

    return 0;
}