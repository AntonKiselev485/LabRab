#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a,b,c;
	cout << "������� ����� A = ";
	cin >> a;
	cout << "������� ����� B = ";
	cin >> b;
	cout << "������� ����� C = ";
	cin >> c;
	if (b<a+c && c<a+b && a<b+c) cout << endl << "������������ �����������";
	else cout << endl << "������������ �����";
	return 0; 
}
