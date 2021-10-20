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
	int nomi=0,nomj=0;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (a[i]==a[j] && i!=j){
				nomi=i+1;
				nomj=j+1;
				break;
			}
		}
	}
	cout << endl;
	if (nomi>nomj) cout << nomj << " " << nomi;
	else cout << nomi << " " << nomj;
	return 0;
}
