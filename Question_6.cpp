#include <iostream>
using namespace std;

main() {
float a,b,c,d;
cout << "Radius : ";
cin >> a;
b = 2 * a;
c = 2 * 3.14 * a;
d = 3.14 * a * a;
cout << "Diameter : " << b << "\n";
cout << "Perimeter : " << c << "\n";
cout << "Area : " << d;
}
