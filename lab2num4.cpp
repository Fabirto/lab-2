#include <iostream>
using namespace std;
int main() {

long long  mult = 1;
int a;
int one = 1;
long long  mult2 = 1;
long long  mult3 = 1;
int b;
cin >> a;
cin >> b;


for (int x = 8; x<16; x++) {
    one = one * x;
}
cout << one << endl;





for (int x = a; x<21; x++) {
    mult = mult * x;
}
cout << mult << " от а до 20" << endl;





for (int x = 1; x<b+1; x++) {
    mult2 = mult2 * x;
}
cout << mult2 << " от 1 до б" << endl;




 for (int x =a; x<b+1;x++) {
    mult3 = mult3*x;
 }
 cout << mult3 << " от а до б";
 














}