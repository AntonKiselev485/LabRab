#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	cout << "введите год  ";
	int g;
	cin >> g;
	int v;
	v=g/100+1;
	cout << "вы живете в " << v << " веке";
	return 0; 
}
