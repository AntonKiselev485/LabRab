#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� �������� = ";
	cin >> a;
	int A=a,k=0;
	while (A){
		k++;
		A/=10;
	}
	if (a%2==0 && k==2) cout << endl << "������������ �����������";
	else cout << endl << "������������ �����";
	return 0; 
}
