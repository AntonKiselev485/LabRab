#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� �������� = ";
	cin >> a;
	int a1=a/1000,a2=a%1000/100,a3=a%100/10, a4=a%10;
	if (a1==a4 && a2==a3) cout << endl << "������������ �����������";
	else cout << endl << "������������ �����";
	return 0; 
}
