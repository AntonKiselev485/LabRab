#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	int mini;
	int maxi;
	int max=-10000;
	int min=10000;
	for (int i=0; i<n; i++){
		if (a[i]>max) {
		maxi=i;
		max = a[i];}
		if (a[i]<min){
		mini=i;
		min = a[i];}
	}
	if (mini<maxi){
		for (int i=0; i<n; i++){
			if(i>mini && i < maxi) a[i]=0;
		}
	}
	else for (int i=0; i<n; i++)
			if(i>maxi && i < mini) a[i]=0;
	for (int i=0; i<n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
