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
	int d=a[1]-a[0];
	int flag=0;
	for (int i=1; i<n; i++){
		if (a[i]-a[i-1] == d) flag = 1;
		else {
			flag = 0;
			break;
		}
	}
	if (flag == 0) cout << endl << 0;
	else cout << endl << d;
	return 0;
}
