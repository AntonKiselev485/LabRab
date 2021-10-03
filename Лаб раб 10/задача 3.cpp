#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "введите значение = ";
	cin >> a;
	int A=a,k=0;
	while (A){
		k++;
		A/=10;
	}
	if (a%2==0 && k==2) cout << endl << "высказывание справедливо";
	else cout << endl << "высказывание ложно";
	return 0; 
}
