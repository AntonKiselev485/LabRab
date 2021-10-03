#include <iostream>
#include <cmath>

using namespace std;

float rast (float x1, float y1, float x2, float y2)
{	
	float Lx, Ly;
	float L;
	
	if (x2>x1) Lx=x2-x1;
	else if (x2<x1) Lx=x1-x2;
	else if (x1==x2){
		if (y1>y2) L = y1-y2;
		else if (y1<y2)  L = y2-y1;
		else if (y1==y2) L=0;
		return L;
	}
	
	if (y2>y1) Ly=y2-y1;
	else if (y2<y1) Ly=y1-y2;
	else if (y1==y2){
		if (x1>x2) L = x1-x2;
		else if (x1<x2)  L = x2-x1;
		else if (x1==x2) L = 0;
		return L;
	}
	
	L=sqrt(Ly*Ly+Lx*Lx);
	
	return L;
}

int main()
{
    setlocale(LC_ALL, "Russian");
	float x1, y1, x2, y2, x3, y3;
	
	cout << "������� ���������� 1 �������: ";
	cin >> x1 >> y1;
	cout << "������� ���������� 2 �������: ";
	cin >> x2 >> y2;
	cout << "������� ���������� 3 �������: ";
	cin >> x3 >> y3;
	cout << endl;
		
	float AB = rast(x1,y1,x2,y2);
	float BC = rast(x2,y2,x3,y3);
	float AC = rast(x1,y1,x3,y3);
	float PP = (AB+BC+AC)/2;
	float S = pow(PP*(PP-AB)*(PP-AC)*(PP-BC), 0.5);
	
	cout << "����� 1 ������� = " << AB << endl;
	cout << "����� 2 ������� = " << BC << endl;
	cout << "����� 3 ������� = " << AC;
	cout << endl << "�������� = " << PP*2 << endl << "������� = " << S;
	
	return 0;	
}
