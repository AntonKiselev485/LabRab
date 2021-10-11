#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float a;
	cin >> a;
	int n;
	cin >> n;
	float p=1;
	for (int i=1; i<=n; i++){
		p=p+pow(a,i);
	}
	cout << endl << p;
	return 0;
}

