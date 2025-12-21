#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int T;
    cin >> T;
    int A,B,C,X;
    vector<string> answer; 

    for(int i = 0; i < T; i++){

        cin >> A >> B >> C >> X;
        if(A+B >= X || A+C >= X || B+C >= X){
            answer.push_back("YES");
        } else {
            answer.push_back("NO");
        }
    }

    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << endl;
    }

    return 0;
}