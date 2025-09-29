#include <iostream>
using namespace std;


void raschet(double&h, double&m, double&b)
{
    cout << "Введите кол-во часов, ставку и % премии \n";
    cin >> h >> m >> b;

    double zp, nalog;

    zp = h*m*(1.0 + b/100.0);
    cout << "Общая зп = " << zp << endl;

    nalog = m*13/100.0;
    cout << "Налог = " << nalog << endl;

    cout << "Итого на руки = " << zp - nalog << endl;

}

int main()
{
    double h,m,b;
    raschet(h,m,b);
    return 0;

}