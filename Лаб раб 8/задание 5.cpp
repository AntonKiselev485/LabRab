#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "������� �����  ";
	cin >> x;
	int a=x/100, b=x/10%10, c=x%10;
	int x2=b*100 + c*10 + a;
	cout << "���������� ����� =  " << x2;
	return 0; 
}
