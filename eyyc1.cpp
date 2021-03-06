#include"funct.h"
void eyyc1()
{
    double a, b, c, d, e, f, x, y;
    cout << "-----------" << endl;
    cout << "对于方程组：" << endl;
    cout << "1.   ax+by=c " << endl;
    cout << "1.   dx+ey=f " << endl;
    cout << "依次输入a,b,c,d,e,f:" << endl;
    cout << "-----------" << endl;
    cin >> a >> b >> c >> d >> e >> f;
    y = (c * d - a * f) / (b * d - a * e);
    x = (b * f - c * e) / (b * d - a * e);
    cout << "-----------" << endl;
    cout << "y=" << y << endl;
    cout << "x=" << x << endl;
}