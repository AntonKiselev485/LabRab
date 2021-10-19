#include <iostream>
#include <cmath>
using namespace std;
int Sign(float x){
	if (x<0) return -1;
	if (x==0) return 0;
	if (x>0) return 1;
}
int main(){
	setlocale(LC_ALL, "Russian");
	float a,b;
	cin >> a >> b;
	cout << endl << Sign(a)+Sign(b);
	return 0;
}
