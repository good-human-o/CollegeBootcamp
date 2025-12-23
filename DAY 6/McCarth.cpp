#include<iostream>

using namespace std;

int McCarth(int num){
    if( num > 100){
        return num - 10;
    }
    
    return McCarth(McCarth( num + 11 ));
}

int main(){

    cout << McCarth(52);

    return 0;
}