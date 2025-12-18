#include<iostream>

void printGap(){
    for(int j = 0; j < 2; j++)
    std::cout<<" ";
}

void printS(int n, int i){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n/2 || i == n-1){
                std::cout<<"*";
            } 
            else if( i == 1 && j == 0 || i == n-2 && j==n-1){
                std::cout<<"*";
            }
            else{
                std::cout<<" ";
            }
        }

    printGap();
}


void printA(int n, int i){
            for(int j = 0; j < n; j++){
                if(i == 0 || i == n/2){
                    std::cout<<"*";
                }        
                else{
                    std::cout<<"*   *";
                    break;
                }
            }
        printGap();
}

void printN(int n, int i){
            for(int j = 0; j < n; j++){
                if(i == 0){
                    std::cout<<"*** *";
                    break;
                }
                else if(i == n-1){
                    std::cout<<"* ***";
                    break;
    }       
                else{
                    std::cout<<"* * *";
                    break;
                }
            }

            printGap();
}

void printH(int n, int i){
            for(int j = 0; j < n; j++){
                if(i == n/2){
                    std::cout<<"*****";
                    break;
                }       
                else{
                    std::cout<<"*   *";
                    break;
                }
            }
            printGap();
}

void printP(int n, int i){
            for(int j = 0; j < n; j++){
                if(i == n/2){
                    std::cout<<"*****";
                    break;
                }       
                else{
                    std::cout<<"*   *";
                    break;
                }
            }
            printGap();
}

void printU(int n, int i){
            for(int j = 0; j < n; j++){
                if(i == n-1){
                    std::cout<<"*****";
                    break;
                }       
                else{
                    std::cout<<"*   *";
                    break;
                }
            }
            printGap();
}

void printL(int n, int i){
            for(int j = 0; j < n; j++){
                if(i == n-1){
                    std::cout<<"*****";
                    break;
                }       
                else{
                    std::cout<<"*";
                    break;
                }
            }
}

void printAnshul(int n, int i){
        printA(n, i);
        printN(n, i);
        printS(n, i);
        printH(n, i);
        printU(n, i);
        printL(n, i);
}

int main(){

    int i = 0;
    int n = 5;

    for(int i = 0; i < n; i++){
        printAnshul(n, i);
        std::cout<<std::endl;
    }
    return 0;
}