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
	int nom=0;
	for (int i=1; i<n-1; i++){
		if (a[i]>a[i-1] && a[i]>a[i+1]) nom=i;
	}
	cout << endl << nom+1;
	return 0;
}
