#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int N;
	cin >> N;
	cout << "с начала минуты прошло = " << N%60 << " секунд";
	return 0; 
}
