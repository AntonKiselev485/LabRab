#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	
	int a,b,c;
	cout << "A= ";
	cin >> a;
	cout << "B= ";
	cin >> b;
	cout << "C= ";
	cin >> c;
	
	int summ;
	int d=min(a,min(b,c));
	if (a==d) summ=b+c;
	else if(b==d) summ=c+a;
	else if(c==d) summ=b+a;
	
	cout << "сумма наибольших = " << summ << endl; 
	return 0;
}
