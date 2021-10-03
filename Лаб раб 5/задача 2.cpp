#include <iostream>
#include <cmath>

using namespace std;

float rast (float x1, float x2)
{	
	float L;
	
	if (x2>x1) L=x2-x1;
	else if (x2<x1) L=x1-x2;
	else if (x1==x2){
	    L=0;
		return L;
	}

	return L;
}

int main()
{
    setlocale(LC_ALL, "Russian");
	float xA, xB, xC;
	
	cout << "введите координаты точки A: ";
	cin >> xA;
	cout << "введите координаты точки B: ";
	cin >> xB;
	cout << "введите координаты точки C: ";
	cin >> xC;
	cout << endl;
	
	float AC = rast(xA,xC);
	float BC = rast(xB,xC);
	
	cout << "расстояние от точки A до точки C = " << AC << endl;
	cout << "расстояние от точки B до точки C = " << BC;
	cout << endl << "сумма расстояний = " << AC+BC;
	
	return 0;
}
