#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "������� �����  ";
	cin >> x;
	int a,b;
	a=x/10;
	b=x%10;
	int x2;
	x2=b*10+a;
	cout << "���������� ����� ��� ���������� ���� = " << x2;
	return 0; 
}
