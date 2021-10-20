#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	float a[n];
	for (int i=1;i<=n;i++){
		cin >> a[i];
	}
	float b[n];
	for (int i=1; i<=n; i++){
		float sum=0;
		float k=0;
		for (int j=1; j<=i; j++){
			sum = sum + a[j];
			k++;
		}
		b[i]=sum/k;
	}
	cout << endl;
	for (int i=1; i<=n; i++){
		cout << b[i] << " ";
	}
	return 0;
}
