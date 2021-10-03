#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float a,c;
	cout << "A= ";
	cin >> a;
	c=a*a;
	c=c*c;
	c=c*c;
	cout << endl << "A^8= " << c;
	return 0; 
}
