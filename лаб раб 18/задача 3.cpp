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
	int u;
	for (int i=0; i<n; i++){
		if (a[i]%2!=0) u = a[i];
	}
	for (int i=0; i<n; i++){
		if (a[i]%2!=0) a[i]=a[i]+u;
	}
	for (int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	return 0;
}
