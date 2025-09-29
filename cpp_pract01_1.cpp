#include <iostream>
using namespace std;

int main()
{
    double h,m,b;
    cout << "Введите кол-во часов, ставку и % премии \n";
    cin >> h >> m >> b;
    double zp;
    zp = h*m*(1.0 + b/100.0);
    cout << "Общая заработанная плата = " << zp;
    return 0;
}