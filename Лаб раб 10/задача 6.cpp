#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a,b,c;
	cout << "введите катет A = ";
	cin >> a;
	cout << "введите катет B = ";
	cin >> b;
	cout << "введите гипот C = ";
	cin >> c;
	if (c*c==b*b+a*a) cout << endl << "высказывание справедливо";
	else cout << endl << "высказывание ложно";
	return 0; 
}
