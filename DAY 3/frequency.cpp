#include<iostream>
#include<vector>

using namespace std;

int main(){
    int Array[] = {1, 1, 2, 3, 1, 3};
    vector<bool> elements;
    vector<int> frequency;
    bool found = false;

    for(int i = 0; i < 6; i++){

        int count = 0;

        if(found == false){
            elements.push_back(true);
        }

        if(elements.back() == true){
            frequency[elements.size()-1]++;
        }

        if(frequency[elements.size()-1] > 1){
            count = 0;
        }

    }


    for(int i = 0; i < elements.size(); i++){
        cout << elements[i] << " : " << frequency[i] << endl;
    }

    return 0;
}