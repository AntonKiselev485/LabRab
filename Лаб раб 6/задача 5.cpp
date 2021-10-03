#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float x,y;
	cout << "x= ";
	cin >> x;
	y = 4*pow(x-3,6) - 7*pow(x-3,3) + 2;
	cout << "y= " << y;
	return 0;
}
