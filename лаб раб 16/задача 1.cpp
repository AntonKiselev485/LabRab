#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	int a[n];
	for (int i=0; i<n; i++){
		if (i==0) a[i]=1;
		else a[i]=a[i-1]+2;
	}
	cout << endl << endl;
	for (int i=0; i<n; i++){
		cout << a[i] << " ";
	}
	return 0;
}
