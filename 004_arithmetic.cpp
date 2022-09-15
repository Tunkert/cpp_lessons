//
// Created by tunkert on 9/15/22.
//

#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int main() {
    cout << 2 + 3 << endl; // 5
    cout << 2.0 + 3 << endl; // 5
    cout << 10 - 2 << endl; // 8
    cout << 4 * 5 << endl; // 20
    cout << 12 / 5 << endl; // 2 - yields an integer
    cout << 12 % 5 << endl; // 2 - the remainder
//    cout << 2 ** 3 << endl; // 8 - because 2^3 = 8 - does not work
    cout << pow(2, 3) << endl;
}
