#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	int a,d;
	cin >> a >> d;
	int c[n];
	for (int i=0; i<n; i++){
		if (i==0) c[i]=a;
		else if (i==1) c[i]=a*d;
		else c[i]=c[i-1]*d;
	}
	cout << endl << endl;
	for (int i=0; i<n; i++){
		cout << c[i] << " ";
	}
	return 0;
}
