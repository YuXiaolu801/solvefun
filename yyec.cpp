#include"funct.h"
void yyec1()
{
    double a, b, c;
    double x = MIN, y;
    cout << "-----------" << endl;
    cout << "对于ax^2+bx+c=0" << endl;
    cout << "依降次输入各项系数 a,b,c" << endl;
    cout << "-----------" << endl;
    cin >> a >> b >> c;
    x = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    y = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << "-----------" << endl;
    cout << "x1="<<x << endl <<"x2="<< y << endl;
}