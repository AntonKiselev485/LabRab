#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	cout << "������� ���  ";
	int g;
	cin >> g;
	int v;
	v=g/100+1;
	cout << "�� ������ � " << v << " ����";
	return 0; 
}
