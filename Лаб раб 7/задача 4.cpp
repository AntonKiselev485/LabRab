#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float v1, v2, s, t;
	
	cout << "ск 1 авто = ";
	cin >> v1;
	cout << endl << "ск 2 авто = ";
	cin >> v2;
	cout << endl << "расст в нач момент = ";
	cin >> s;
	cout << endl << "через какое время надо знать = ";
	cin >> t;
	
	float s2;
	s2 = v1*t + v2*t + s;
	cout << endl << "расст в момент времени t= " << s2;
}
