#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	int k,l;
	cin >> k >> l;
	int a[n];
	for (int i=1; i<=n; i++){
		cin >> a[i];
	}
	float sum=0,v=0;
	for (int i=k; i<=l; i++){
		sum=sum+a[i];
		v++;
	}
	cout << endl << sum/v;
	return 0;
}
