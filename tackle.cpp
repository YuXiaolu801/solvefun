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