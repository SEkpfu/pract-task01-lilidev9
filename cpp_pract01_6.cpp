#include <iostream>
using namespace std;

double obshzarplata(double,double,double);
double nalog(double);
double itog(double);
void input(string&rabotnik, double&h, double&m, double&b);
int surname( string&surname, double&nl , double&it);

int main()
{
    double  h,m,b,  h2,m2,b2,  zp,nl,it,  zp2,nl2,it2 ;
    string rabotnik, rabotnik2;
    
    cout << "Для первого работника \n";
    input(rabotnik,h,m,b);

    cout << "Для второго работника \n";
    input(rabotnik2,h2,m2,b2);

    rabotnik.resize(20);
    rabotnik2.resize(20);

    zp = obshzarplata(h, m, b);
    zp2 = obshzarplata(h2, m2, b2);

    nl = nalog(zp);
    nl2 = nalog(zp2);

    it = itog(zp);
    it2 = itog(zp2);

    surname( rabotnik, nl , it);
    surname( rabotnik2, nl2 , it2);

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

void input(string&rabotnik, double&h, double&m, double&b)
{
    cout << "Введите фамилию, кол-во часов, ставку и % премии \n";
    cin >> rabotnik >> h >> m >> b;
}

int surname( string&surname, double&nl , double&it)
{
    if(it<1000)
        cout << surname << " заработал меньше 1000р \n";
    if(nl>50)
        cout << surname[0]<< "-" << surname[size(surname)-1] << " заплатил налог > 50р \n"; //не выводи последнюю букву??
    return 0;

}