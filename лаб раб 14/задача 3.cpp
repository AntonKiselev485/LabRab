#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	int sum=0;
	int k=1;
	while (sum<=n){
		sum=sum+k;
		k++;
	}
	cout << sum << " " << k-1;
	return 0;
}
