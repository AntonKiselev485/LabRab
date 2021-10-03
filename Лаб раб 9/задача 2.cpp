#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int K;
	cin >> K;
	cout << "номер дня недели  ";
	int K2=K%7+1;
	if (K2==7) K2=0;
	cout << K2;
	return 0; 
}
