#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int bt;
	cout << "���-�� ����= ";
	cin >> bt;
	int kb;
	kb=bt/1024;
	cout << "���-�� ������ ��= " << kb;
	return 0; 
}
