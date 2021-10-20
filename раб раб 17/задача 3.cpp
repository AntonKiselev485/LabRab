#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	int min=100000;
	for (int i=0; i<n; i++){
		if (a[i]<min && (i+1)%2==0) min = a[i];
	}
	cout << endl << min;
	return 0;
}
