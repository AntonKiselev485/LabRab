#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int bt;
	cout << "кол-во байт= ";
	cin >> bt;
	int kb;
	kb=bt/1024;
	cout << "кол-во полных кб= " << kb;
	return 0; 
}
