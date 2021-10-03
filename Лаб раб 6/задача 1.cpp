#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a,b,c;
	cout << "A= ";
	cin >> a;
	cout << endl << "B= ";
	cin >> b;
	c=a;
	a=b;
	b=c;
	cout << endl << "меняем местами A и B" << endl;
	cout << "A= " << a << " " << "B= " << b;
	return 0;
}
