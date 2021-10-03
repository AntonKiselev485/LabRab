#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float a, b;
	cin >> a >> b;
	if (a==0 || b==0){
		cout << "числа не должны равняться нулю" << endl;
		return 0;
	}
	
	a=fabs(a);
	b=fabs(b);
	
	cout << "сумма модулей = " << a + b << endl;
	
	if (a>b) cout << "разность модулей = " << a - b << endl;
	else if (a<b) cout << "разность модулей = " <<  b - a << endl;
	else if (a==b) cout << "разность модулей = 0" << endl;
	
	cout << "произведение модулей = " << a * b << endl;
	
	float chast;
	if (a>b) cout << "частное модулей = " << a / b << endl;
	else if (a<b) cout << "частное модулей = " << b / a << endl;
	else if (a==b) cout << "частное модулей = 1" << endl;
	
	return 0;
}
