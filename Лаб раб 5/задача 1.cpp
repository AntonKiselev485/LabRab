#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	
	float x1, x2, y1, y2;
	
	cout << "введите координаты первой точки";
	cin >> x1 >> y1;
	cout << "введите координаты второй точки";
	cin >> x2 >> y2;
	
	float Lx, Ly;
	
	if (x2>x1) Lx=x2-x1;
	else if (x2<x1) Lx=x1-x2;
	else if (x1==x2){
		if (y1>y2) cout << "расстояние = " << y1-y2;
		else if (y1<y2)  cout << "расстояние = " << y2-y1;
		else if (y1==y2) cout << "расстояние = 0";
		return 0;
	}
	
	if (y2>y1) Ly=y2-y1;
	else if (y2<y1) Ly=y1-y2;
	else if (y1==y2){
		if (x1>x2) cout << "расстояние = " << x1-x2;
		else if (x1<x2)  cout << "расстояние = " << x2-x1;
		else if (x1==x2) cout << "расстояние = 0";
		return 0;
	}
	
	float L;
	
	L=sqrt(Ly*Ly+Lx*Lx);
	cout << "расстояние = " << L;
	
	return 0;
}
