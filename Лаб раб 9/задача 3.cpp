#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int K;
	cin >> K;
	int N;
	cin >> N;
	cout << "����� ��� ������  ";
	int K2=(K+N-2)%7+1;
	cout << K2;
	return 0; 
}
