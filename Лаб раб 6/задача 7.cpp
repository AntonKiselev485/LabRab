#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	
	float a, c, x;
	
	cout << "A= ";
	cin >> a;
	
	c=a*a;
	x=c*a;
	c=c*x;
	x=c;
	c=x*x;
	c=c*x;
	
	cout << endl << "A^15= " << c;
	return 0; 
}
