#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	cout << endl;
	for (int i=0;i<n;i++){
		cin >> b[i];
	}
	for (int i=0; i<n; i++){
		int p=a[i];
		a[i]=b[i];
		b[i]=p;
	}
	cout << endl << endl;
	for (int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i=0; i<n; i++){
		cout << b[i] << " ";
	}
	return 0;
}
