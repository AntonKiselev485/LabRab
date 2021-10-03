#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a,b,c,d;
	cout << "A= ";
	cin >> a;
	cout << endl << "B= ";
	cin >> b;
	cout << endl << "C= ";
	cin >> c;
	d=a;
	a=b;
	b=c;
	c=d;
	cout << endl << "меняем местами A,B,C" << endl;
	cout << "A= " << a << " " << "B= " << b << " " << "C= " << c;
	return 0;
}
