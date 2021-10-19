#include <iostream>
#include <cmath>
using namespace std;

int fact2(int n){
	if (n>1) return n * fact2(n-2);
    else return 1;
}

int main(){
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	cout << endl;
	cout << fact2(n);
	return 0;
}
