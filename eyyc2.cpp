//�˷�������
#include"funct.h"
void eyyc2()
{
    double a, b, c, d, e, f;
    cout << "-----------" << endl;
    cout << "���ڷ����飺" << endl;
    cout << "1.   ax+by=c " << endl;
    cout << "1.   dx+ey=f " << endl;
    cout << "��������a,b,c,d,e,f:" << endl;
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