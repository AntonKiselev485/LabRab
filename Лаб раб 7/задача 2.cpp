#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float a;
	cout << "???? ? ???= ";
	cin >> a;
	float pi=3.14;
	a=(180*a)/pi;
	cout << "???? ? ????????= " << a;
	return 0; 
}
