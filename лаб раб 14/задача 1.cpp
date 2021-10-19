#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a,b;
	cin >> a >> b;
	for (int i=a; i<=b; i++){
		for (int j=1; j<=i; j++){
				cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
