#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float a, b;
	cin >> a >> b;
	if (a==0 || b==0){
		cout << "����� �� ������ ��������� ����" << endl;
		return 0;
	}
	
	cout << "����� ��������� = " << a*a + b*b << endl;
	
	if (a>b) cout << "�������� ��������� = " << a*a - b*b << endl;
	else if (a<b) cout << "�������� ��������� = " <<  b*b - a*a << endl;
	else if (a==b) cout << "�������� ��������� = 0" << endl;
	
	cout << "������������ ��������� = " << (a*a) * (b*b) << endl;
	
	float chast;
	if (a>b) cout << "������� ��������� = " << (a*a) / (b*b) << endl;
	else if (a<b) cout << "������� ��������� = " << (b*b) / (a*a) << endl;
	else if (a==b) cout << "������� ��������� = 1" << endl;
	
	return 0;
}
