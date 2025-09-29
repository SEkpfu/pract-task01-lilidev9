#include <iostream>
using namespace std;


void raschet(double&h, double&m, double&b, double&h2, double&m2, double&b2)
{
    cout << "Введите кол-во часов, ставку и % премии сначала для первого работника, а после те же данные для второго \n";
    cin >> h >> m >> b >> h2 >> m2 >> b2;

    double zp, nalog, itog, zp2, nalog2, itog2;

    zp = h*m*(1.0 + b/100.0);
    nalog = m*13/100.0;
    itog = zp - nalog;

    zp2 = h2*m2*(1.0 + b2/100.0);
    nalog2 = m2*13/100.0;
    itog2 = zp2 - nalog2;

    if(itog - itog2 >0)
        cout << "Первый работник заработал на " << itog - itog2 << " рублей больше \n";
    else
        if(itog - itog2 < 0)
            cout << "Второй работник заработал на " << itog2 - itog << " рублей больше \n";
        else
            cout << "Работники получили одинаковую сумму на руки \n";
    
    cout << "Вместе работники получили " << itog + itog2 << " рублей. \n";
}

int main()
{
    double h,m,b, h2, m2, b2;
    raschet(h,m,b, h2, m2, b2);
    return 0;
}