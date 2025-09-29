#include <iostream>
using namespace std;

double obshzarplata(double,double,double);
double nalog(double);
double itog(double);
void input(double&h, double&m, double&b);

int main()
{
    double h,m,b;
    input(h,m,b);
    double zp,nl,itt;
    zp = obshzarplata(h,m,b);
    cout << "Общая заработанная плата = " << zp << "\n";
    nl = nalog(zp);
    cout << "Налог = " << nl << "\n";
    itt = itog(zp);
    cout << "Итого на руки " << itt << "\n";
    return 0;
}

double obshzarplata(double h,double m,double b)
{
    return h*m*(1.0 + b/100.0);
}

double nalog(double m)
{
    return m*13/100.0;
}

double itog(double m)
{
    return m - nalog(m);
}

void input(double&h, double&m, double&b)
{
    cout << "Введите кол-во часов, ставку и % премии \n";
    cin >> h >> m >> b;
}