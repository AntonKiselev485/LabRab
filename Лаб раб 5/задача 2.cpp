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
	
	cout << "������� ���������� ����� A: ";
	cin >> xA;
	cout << "������� ���������� ����� B: ";
	cin >> xB;
	cout << "������� ���������� ����� C: ";
	cin >> xC;
	cout << endl;
	
	float AC = rast(xA,xC);
	float BC = rast(xB,xC);
	
	cout << "���������� �� ����� A �� ����� C = " << AC << endl;
	cout << "���������� �� ����� B �� ����� C = " << BC;
	cout << endl << "����� ���������� = " << AC+BC;
	
	return 0;
}
