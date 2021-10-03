#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float a, b;
	cin >> a >> b;
	if (a==0 || b==0){
		cout << "числа не должны равняться нулю" << endl;
		return 0;
	}
	
	cout << "сумма квадратов = " << a*a + b*b << endl;
	
	if (a>b) cout << "разность квадратов = " << a*a - b*b << endl;
	else if (a<b) cout << "разность квадратов = " <<  b*b - a*a << endl;
	else if (a==b) cout << "разность квадратов = 0" << endl;
	
	cout << "произведение квадратов = " << (a*a) * (b*b) << endl;
	
	float chast;
	if (a>b) cout << "частное квадратов = " << (a*a) / (b*b) << endl;
	else if (a<b) cout << "частное квадратов = " << (b*b) / (a*a) << endl;
	else if (a==b) cout << "частное квадратов = 1" << endl;
	
	return 0;
}
