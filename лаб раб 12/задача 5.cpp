#include <iostream>
using namespace std;
 
int main() {
    setlocale(LC_ALL, "Russian");
    
    cout << "���:";
    int n;
    cin>>n;
 
    cout << "��� ";
 
    switch ((n) % 10){
    case 0: case 1:
        cout << "���";
        break;
    case 2: case 3:
        cout << "����";
        break;
    case 4: case 5:
        cout << "����";
        break;
    case 6: case 7:
        cout << "�����";
        break;
    case 8: case 9:
        cout << "���";
        break;
    }
 
    switch (n % 12) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 9: case 10: case 11:
        cout << "�� ";
        break;
    case 6: case 7: case 8:
        cout << "��� ";
        break;
    }
 
    switch ((n + 8) % 12) {
    case 0:
        cout << "�����";
        break;
    case 1:
        cout << "������";
        break;
    case 2:
        cout << "�����";
        break;
    case 3:
        cout << "�����";
        break;
    case 4:
        cout << "�������";
        break;
    case 5:
        cout << "����";
        break;
    case 6:
        cout << "������";
        break;
    case 7:
        cout << "����";
        break;
    case 8:
        cout << "��������";
        break;
    case 9:
        cout << "������";
        break;
    case 10:
        cout << "������";
        break;
    case 11:
        cout<<"������";
        break;
    }
    return 0;
}
