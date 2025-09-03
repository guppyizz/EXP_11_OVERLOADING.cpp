#include <iostream>
using namespace std;
class construct
{ 
public:
    float add; 
    construct()
    {
        add = 0;
    }
    construct(int a, int b)
    {
        add = a + b;
    }
    construct(int a, int b, int c)
    {
        add = a+b+c;
    }
    void disp()
    {
        cout << add << endl;
    }
};
int main()
{
    construct a;
    construct b(584, 599);
    construct c(10, 20, 30);
    
    cout << "result : " << endl;
    a.disp();

    cout << "Two-parameter : " << endl;
    b.disp();

    cout << "Three-parameter : " << endl;
    c.disp();

    return 0;
}
