#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int a,b,c;
	cin >> a >> b >> c;
	int s=a*b;
	cout << "���-�� ��=  " << (a/c)*(b/c) << "  ����� �����= " << s-((a/c)*(b/c))*pow(c,2);
	return 0; 
}
