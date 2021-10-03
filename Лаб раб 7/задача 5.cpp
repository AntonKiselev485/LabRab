#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float a,b,x;
	cout << "A*x + B = 0" << endl << "A= ";
	cin >> a;
	cout << endl << "B= ";
	cin >> b;
	x=-b/a;
	cout << endl << "x= " << x;
	return 0;
}
