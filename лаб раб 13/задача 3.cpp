#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	float p=0;
	for (int i=1; i<=n; i++){
		p=p+(2*i-1);
		cout << p << endl;
	}
	return 0;
}

