// Chef wants to buy 2 ice creams, each costing X dollars, for him and Chefina.
// However, he only has Y dollars with him. Will he be able to buy 2 ice creams?

// Input Format
// The only line of input will contain 2 space-separated integers X and Y
// Y, the price of each ice cream and the money Chef has.
// Output Format
// Print YES if Chef will be able to buy two ice creams, otherwise print NO.

#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (Y >= 2*X)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
