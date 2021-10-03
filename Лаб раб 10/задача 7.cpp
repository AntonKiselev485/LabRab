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
	if (b<a+c && c<a+b && a<b+c) cout << endl << "высказывание справедливо";
	else cout << endl << "высказывание ложно";
	return 0; 
}
