#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float a, b;
	cin >> a >> b;
	if (a==0 || b==0){
		cout << "����� �� ������ ��������� ����" << endl;
		return 0;
	}
	
	a=fabs(a);
	b=fabs(b);
	
	cout << "����� ������� = " << a + b << endl;
	
	if (a>b) cout << "�������� ������� = " << a - b << endl;
	else if (a<b) cout << "�������� ������� = " <<  b - a << endl;
	else if (a==b) cout << "�������� ������� = 0" << endl;
	
	cout << "������������ ������� = " << a * b << endl;
	
	float chast;
	if (a>b) cout << "������� ������� = " << a / b << endl;
	else if (a<b) cout << "������� ������� = " << b / a << endl;
	else if (a==b) cout << "������� ������� = 1" << endl;
	
	return 0;
}
