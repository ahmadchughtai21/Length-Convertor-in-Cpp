#include <iostream>
using namespace std;

int main() {
    float m, i, f;
    cout << "Enter Length in meters : ";
    cin >> m;

    i = m*39.3701;
    f = m*3.28084;

    cout << "Length in Feet : " << f <<endl;
    cout << "Length in Inches : " << i <<endl;

    return 0;
}