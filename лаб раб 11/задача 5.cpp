#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	
	int x;
	cout << "x= ";
	cin >> x;
	if (x!=0){
		if (x>0){
			if (x%2==0) cout << "число положительное четное";
			else cout << "число положительное нечетное";
		}
		else {
			if (x%2==0) cout << "число отр четное";
			else cout << "число отр нечетное";
		}
	}
	else cout << "число нулевое";
	return 0;
}
