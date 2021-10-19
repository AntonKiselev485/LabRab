#include <iostream>
#include <cmath>
using namespace std;
float b;
int PowerA3(float a, float b){
	b=pow(a,3);
	return b; 
}
int main(){
	setlocale(LC_ALL, "Russian");
	float a[5];
	int k=1;
	while (k<=5){
		cin >> a[k];
		cout << PowerA3(a[k],b) << " ";
		k++;
		cout << endl << endl;
	}
	return 0;
}
