#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float x,y;
	cout << "x= ";
	cin >> x;
	y = 3*pow(x,6) - 6*x*x - 7;
	cout << "y= " << y;
	return 0;
}
