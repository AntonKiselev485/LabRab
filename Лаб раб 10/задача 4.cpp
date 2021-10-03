#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "введите значение = ";
	cin >> a;
	int a1=a/100,a2=a%100/10,a3=a%10;
	if (a1>a2>a3 || a1<a2<a3) cout << endl << "высказывание справедливо";
	else cout << endl << "высказывание ложно";
	return 0; 
}
