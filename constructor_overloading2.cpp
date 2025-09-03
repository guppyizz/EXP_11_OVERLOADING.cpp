#include <iostream>
using namespace std;
class construct
{ 
public:
    float avggpa; 
    construct()
    {
        avggpa = 8.4;
    }
    construct(float sem1, float sem2)
    {
        avggpa = (sem1+sem2)/2;
    }
    construct(float sem1, float sem2 , float sem3)
    {
        avggpa = (sem1+sem2+sem3)/3;
    }
   construct(float sem1, float sem2 , float sem3, float sem4)
    {
        avggpa = (sem1+sem2+sem3+sem4)/4;
    }
    void disp()
    {
        cout << avggpa << endl;
    }
};
int main()
{
    construct a;
    construct b(8.4, 6.5);
    construct c(8.4 , 6.5, 5.5);
    construct d(8.4 , 6.5, 5.5, 4.5);
    
    cout << "average gpa in 1st sem : " << endl;
    a.disp();

    cout << "average gpa in 2nd sem : " << endl;
    b.disp();

    cout << "average gpa in 3rd sem  : " << endl;
    c.disp();
    
    cout << "average gpa in 4th sem  : " << endl;
    d.disp();


    return 0;
}

/*output 
    
average gpa in 1st sem : 
8.4
average gpa in 2nd sem : 
7.45
average gpa in 3rd sem  : 
6.8
average gpa in 4th sem  : 
6.225 */


