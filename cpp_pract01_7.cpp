#include <iostream>
using namespace std;

double obshzarplata(double,double,double);
double nalog(double);
double itog(double);
void input( double&h, double&m, double&b);

int main()
{
    double  h1,m1,b1,zp1,it1,  h2,m2,b2,zp2,it2,   h3,m3,b3,zp3,it3,   h4,m4,b4,zp4,it4,   h5,m5,b5,zp5,it5,     sm;
    
    cout << "Для первого работника \n";
    input(h1,m1,b1);

    cout << "Для второго работника \n";
    input(h2,m2,b2);

    cout << "Для третьего работника \n";
    input(h3,m3,b3);

    cout << "Для четвертого работника \n";
    input(h4,m4,b4);

    cout << "Для пятого работника \n";
    input(h5,m5,b5);

    zp1 = obshzarplata(h1, m1, b1);
    zp2 = obshzarplata(h2, m2, b2);
    zp3 = obshzarplata(h3, m3, b3);
    zp4 = obshzarplata(h4, m4, b4);
    zp5 = obshzarplata(h5, m5, b5);


    it1 = itog(zp1);
    it2 = itog(zp2);
    it3 = itog(zp3);
    it4 = itog(zp4);
    it5 = itog(zp5);

    sm = it1 + it2 + it3 + it4 + it5;
    cout << "Общая сумма = " << sm << endl;
    cout << "Средняя зп = " << sm/5. << endl;

    return 0;
}

double obshzarplata(double h,double m,double b)
{
    return h*m*(1.0 + b/100.0);
}

double nalog(double zp)
{
    return zp*13/100.0;
}

double itog(double zp)
{
    return zp - nalog(zp);
}

void input( double&h, double&m, double&b)
{
    cout << "Введите кол-во часов, ставку и % премии \n";
    cin >> h >> m >> b;
}

