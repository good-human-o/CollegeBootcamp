#include<iostream> 
#include<string>

using namespace std;

string reverseString(string s){
        for(int i = 0; i < s.size()/2; i++){
        int temp = s[i];
        s[i] = s[s.size()-i-1];
        s[s.size()-i-1] = temp;
    }
    return s;
}

int main(){
    string s;
    string answer;
    cout << " enter a string: ";
    cin >> s;

    int times;

    cout << "enter a number: ";
    cin >> times;

    for(int i = 0; i < times; i++){
        answer = reverseString(s);
    }

    cout<<answer;

    return 0;
}