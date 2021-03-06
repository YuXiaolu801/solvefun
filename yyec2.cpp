#include"funct.h"
void yyec2()
{
    double a, b, c;
    double x = MIN, y;
    cout << "-----------" << endl;
    cout << "对于ax^2+bx+c=0" << endl;
    cout << "依降次输入各项系数 a,b,c" << endl;
    cout << "-----------" << endl;
    cin >> a >> b >> c;
     for (;; x++)
     {
         y = x / 10;
         if (a * y * y + b * y + c == 0)
         {
             cout << "-----------" << endl;
             cout << "x=" << y << endl;
             // break;
         }
     }
}