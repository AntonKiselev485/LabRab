#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	double a1, b1, c1, a2, b2, c2, D, x, y;
 
    cout << "A1= ";
    cin >> a1;
    cout << "B1=";
    cin >> b1;
    cout << "C1=";
    cin >> c1;
    cout << "A2=";
    cin >> a2;
    cout << "B2=";
    cin >> b2;
    cout << "C2=";
    cin >> c2;
    
    D= a1*b2 - a2*b1;
	x = (c1*b2 - c2*b1) / D;
    y = (a1*c2 - a2*c1) / D;
    
    cout << endl << "X= " << x << "  Y=" << y << endl;
    
    return 0;
}
