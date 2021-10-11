#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	
	int N;
	char C;
	cin >> C >> N;
	switch (C){
		case 'C': case 'c':
			switch (N){
				case 1:
					cout << "zapad";
					break;
				case -1:
					cout << "vostok";
					break;
				case 0:
					cout << "sever";
					break;
			}
			break;
		case 'U': case 'u':
			switch (N){
				case -1:
					cout << "zapad";
					break;
				case 1:
					cout << "vostok";
					break;
				case 0:
					cout << "ug";
					break;
			}
			break;
		case 'Z': case 'z':
			switch (N){
				case 0:
					cout << "zapad";
					break;
				case 1:
					cout << "ug";
					break;
				case -1:
					cout << "sever";
					break;
			}
			break;
		case 'V': case 'v':
			switch (N){
				case 0:
					cout << "vostok";
					break;
				case -1:
					cout << "ug";
					break;
				case 1:
					cout << "sever";
					break;
			}
			break;
	} 
	return 0;
}

