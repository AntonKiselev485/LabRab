#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a,b;
	cout << "������� �������� A = ";
	cin >> a;
	cout << "������� �������� B = ";
	cin >> b;
	if (a>2 && b<=3) cout << endl << "������������ �����������";
	else cout << endl << "������������ �����";
	return 0; 
}
