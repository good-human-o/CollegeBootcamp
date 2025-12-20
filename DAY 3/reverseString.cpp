#include<iostream> 
#include<string>

using namespace std;

int main(){
    string s;
    cout << " enter a string: ";
    cin >> s;
    int n = s.size();

    for(int i = 0; i < n/2; i++){
        int temp = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = temp;
    }

    cout << endl << "reversed array: ";

    cout<<s;
    
    return 0;
}