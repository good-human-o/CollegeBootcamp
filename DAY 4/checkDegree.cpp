#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    regex pattern("-?\\d+");   
    smatch match;

    if (regex_search(s, match, pattern)) {
        int number = stoi(match.str());
        if(number >= 25){
            cout << "It's Hot.";
        }else{
            cout << "It's Cold.";
        }
    } else {
        cout << "No number found";
    }

    return 0;
}
