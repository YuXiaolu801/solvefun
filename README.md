# solvefun
# 解方程

这两天得知初二的表妹学了一元二次方程，听说还不会解，我就想着试试用C语言编写解方程。

## 一元二次方程

### 用公式法

这种方法效果很好：

```c++
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
```

### 用试错法

这种好像不是太好：

```c++
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
```

## 一元三次方程

```c++
#include"funct.h"
void yysc()
{
    double a, b, c, d;
    double x = MIN, y;
    cout << "-----------" << endl;
    cout << "对于ax^3+bx^2+cx+d=0" << endl;
    cout << "依降次输入各项系数 a,b,c,d" << endl;
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
```

这个就和二次很像，不做多研究。

## 二元一次

### 公式法

```c++
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
```

公式法的错误确实少点，但这似乎不像计算机。

### 试错法

```c++
//此方法不好
#include"funct.h"
void eyyc2()
{
    double a, b, c, d, e, f;
    cout << "-----------" << endl;
    cout << "对于方程组：" << endl;
    cout << "1.   ax+by=c " << endl;
    cout << "1.   dx+ey=f " << endl;
    cout << "依次输入a,b,c,d,e,f:" << endl;
    cout << "-----------" << endl;
    cin >> a >> b >> c >> d >> e >> f;
    double x = MIN, y = MIN, xx, yy;
     if(d!=0){
         for (;; y++)
         {
             yy = y / 100;
             // cout<<yy<<endl;
             if (yy*b*d-a*e*yy==c*d-a*f)
             {
                 cout << "-----------" << endl;
                 cout << "y=" << yy << endl;
                 cout << "x=" << (f-e*yy)/d << endl;
                 break;
             }
             // else cout<<"0";
         }}
         else {
             for (;; y++)
         {
             yy = y / 100;
             // cout<<yy<<endl;
             if (yy*e==f)
             {
                 cout << "y=" << yy << endl;
                 cout << "x=" << (c-b*yy)/a << endl;
                 break;
             }
             // else cout<<"0";
         }

         }

}
```

## 主函数

```c++
#include"funct.h"
int main()
{
    
    while (1)
    {
        cout << "-----------" << endl;
        cout << "1.一元二次" << endl;
        cout << "2.一元三次" << endl;
        cout << "3.二元一次" << endl;
        cout << "-----------" << endl;
        int se;
        cin >> se;
        switch(se)
        {
            case 1:
                yyec1(); 
                //yyec2();
                break;
            case 2:
                yysc();
                break;
            case 3:
                eyyc1();
                //eyyc2();
                break;
            default:cout << "what are you inputting?" << endl; break;
        }
    }
    return 0;
}
```

## 头文件

```c++
#include<iostream>
#include <cmath>
#define MIN -100
using namespace std;
void yyec1();
void yyec2();
void yysc();
void eyyc1();
void eyyc2();

```

