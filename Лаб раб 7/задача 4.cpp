#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float v1, v2, s, t;
	
	cout << "�� 1 ���� = ";
	cin >> v1;
	cout << endl << "�� 2 ���� = ";
	cin >> v2;
	cout << endl << "����� � ��� ������ = ";
	cin >> s;
	cout << endl << "����� ����� ����� ���� ����� = ";
	cin >> t;
	
	float s2;
	s2 = v1*t + v2*t + s;
	cout << endl << "����� � ������ ������� t= " << s2;
}
