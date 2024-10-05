#include <iostream>
using namespace std;
int main ()
{
    using byte = unsigned char;
    pair<byte, byte> positionA;
    pair<byte,byte> positionB;
    cin >> positionA.first >> positionA.second;
    cin >> positionB.first >> positionB.second;
    if ((positionA.first == positionB.first) or (positionA.second == positionB.second)) {
        cout << "ладья угрожает";
    }
    else {
        cout << "ладья не угрожает";
    }
    cout << endl;


       if (positionA.first == positionB.first) {
        cout << "ладья угрожает";
    }
    else {
        cout << "ладья не угрожает";
    }
    cout << endl;

    
    
}