#include <iostream>
using namespace std;

int NOD (int a, int b)
{
    while (a != b)
    {
        if (a>b)
        a -= b;
        else
        b -= a;
    }
    return a;
}

int main()
{
    setlocale(LC_ALL,"rus");
    int a,b;
    cin >> a >> b;        
     if (b == 0)
     cout << a << endl;
     else
     cout << NOD(a,b) << endl;
 
return 0;
}
