#include"funct.h"
void yysc()
{
    double a, b, c, d;
    double x = MIN, y;
    cout << "-----------" << endl;
    cout << "����ax^3+bx^2+cx+d=0" << endl;
    cout << "�������������ϵ�� a,b,c,d" << endl;
    cout << "-----------" << endl;
    cin >> a >> b >> c >> d;
    for (;; x++)
    {
        y = x / 10;
        if (a * y * y * y + b * y * y + c * y + d == 0)
        {
            cout << "-----------" << endl;
            cout << "x=" << y << endl;
            break;
        }
    }
}