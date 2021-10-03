#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a,b;
	cin >> a >> b;
	cout << endl << "длина незанятой части отрезка A =  " << a%b;
	return 0; 
}
