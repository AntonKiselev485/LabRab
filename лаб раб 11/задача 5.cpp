#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	
	int x;
	cout << "x= ";
	cin >> x;
	if (x!=0){
		if (x>0){
			if (x%2==0) cout << "����� ������������� ������";
			else cout << "����� ������������� ��������";
		}
		else {
			if (x%2==0) cout << "����� ��� ������";
			else cout << "����� ��� ��������";
		}
	}
	else cout << "����� �������";
	return 0;
}
