#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float x;
	cin >> x;
	for (float i=0.1; i<=1.1; i+=0.1){
		cout << i << " кг конфет = " << i*x << endl;
	}
	return 0;
}

