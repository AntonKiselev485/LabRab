#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float p;
	cin >> p;
	float v=1000;
	int k=0;
	while (v<1100){
		k++;
		v = v + v*p/100;
	}
	cout << k << " " << v;
	return 0;
}
