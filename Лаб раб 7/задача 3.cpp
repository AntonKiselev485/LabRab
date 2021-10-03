#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	float a,x,y;
	cin >> x >> a >> y;
	float b1,b2;
	b1=a/x;
	b2=(y*a)/x;
	cout << "1 кг будет стоить -" << b1 << endl << "Y кг будет стоить -" << b2;
	return 0; 
}
