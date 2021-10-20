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
		if (i%2!=0) cout << a[i] << " ";
	}
	cout << endl << endl;
	for (int i=0; i<n; i++){
		if (i%2==0) cout << a[i] << " ";
	}
	return 0;
}
