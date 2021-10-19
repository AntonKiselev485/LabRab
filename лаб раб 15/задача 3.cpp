#include <iostream>
#include <cmath>
using namespace std;
float pi=3.14;
int SignS(float r1, float r2){
	return pi*r1*r1-pi*r2*r2;
}
int main(){
	setlocale(LC_ALL, "Russian");
	float a[4];
	cout << "введите радиусы по убыванию их значения" << endl;
	cin >> a[1] >> a[2] >> a[3] >> a[4];
	cout << endl;
	cout << SignS(a[1],a[2]) << " " << SignS(a[2],a[3]) << " " << SignS(a[3],a[4]);
	return 0;
}
