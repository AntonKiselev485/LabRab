#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a,b,c;
	cout << "введите значение A = ";
	cin >> a;
	cout << "введите значение B = ";
	cin >> b;
	cout << "введите значение C = ";
	cin >> c;
	if (a<b<c) cout << endl << "высказывание справедливо";
	else cout << endl << "высказывание ложно";
	return 0; 
}
