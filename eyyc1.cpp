#include"funct.h"
void eyyc1()
{
    double a, b, c, d, e, f, x, y;
    cout << "-----------" << endl;
    cout << "���ڷ����飺" << endl;
    cout << "1.   ax+by=c " << endl;
    cout << "1.   dx+ey=f " << endl;
    cout << "��������a,b,c,d,e,f:" << endl;
    cout << "-----------" << endl;
    cin >> a >> b >> c >> d >> e >> f;
    y = (c * d - a * f) / (b * d - a * e);
    x = (b * f - c * e) / (b * d - a * e);
    cout << "-----------" << endl;
    cout << "y=" << y << endl;
    cout << "x=" << x << endl;
}