#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	float p=1;
	for (int i=1; i<=n; i++){
		p=p*(1.0+i*0.1);
	}
	cout << p;
	return 0;
}

