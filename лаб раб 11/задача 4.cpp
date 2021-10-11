#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	
	int x,y;
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;
	
	cout << "четверть - ";
	if (x>0){
		if (y>0) cout << 1;
		else cout << 4;
	}
	if (x<0){
		if (y>0) cout << 2;
		else cout << 3;
	}
	return 0;
}
