#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	
	int x;
	cout << "x= ";
	cin >> x;
			if (x%2==0) {
				if(x/100==0){
					if (x/10==0) cout << "однозначное число положительное четное";
					else cout << "двухзначное число положительное четное";
				}
				else cout << "трехзначное число положительное четное";
			}
			else{
				if(x/100==0){
					if (x/10==0) cout << "однозначное число положительное нечетное";
					else cout << "двухзначное число положительное нечетное";
				}
				else cout << "трехзначное число положительное нечетное";
			}
	return 0;
}
