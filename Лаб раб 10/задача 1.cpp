#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a,b;
	cout << "введите значение A = ";
	cin >> a;
	cout << "введите значение B = ";
	cin >> b;
	if (a>2 && b<=3) cout << endl << "высказывание справедливо";
	else cout << endl << "высказывание ложно";
	return 0; 
}
