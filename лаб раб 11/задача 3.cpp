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

	int ab,ac;
	ab = abs(b-a);
	ac = abs(c-a);
	
	if (ab>ac){
		cout << "ближн€€ точка - —" << endl << "раст AC=  " << ac; 
	}
	if (ac>ab){
		cout << "ближн€€ точка - B" << endl << "раст AB=  " << ab; 
	}
	return 0;
}
