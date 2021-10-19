#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a,b;
	cin >> a >> b;
	while (a-b>=0){
		a=a-b;
	}
	cout << endl << a;
	return 0;
}
