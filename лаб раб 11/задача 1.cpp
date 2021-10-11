#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	
	int a,b;
	cout << "A= ";
	cin >> a;
	cout << "B= ";
	cin >> b;
	
	if (a!=b){
		if (a>b){
			b=a;
		}
		else if(b>a) a=b;
	}
	else if (a==b){
		a=0;
		b=0;
	}
	cout << "новые значения" << endl << "A= " << a <<  "   B=  " << b;
	return 0;
}
