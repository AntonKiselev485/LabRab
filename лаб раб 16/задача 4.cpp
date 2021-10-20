#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	for (int i=0; i<n; i++){
		cout << a[i] << " " << a[n-1-i] << " ";
	}
	return 0;
}
