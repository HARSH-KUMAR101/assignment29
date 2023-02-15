/*5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
Invent1 x(4,5);
Invent2 y;
float z;
z = x; // Invent1 to float
y = x; // Invent1 to Invent2
return 0;
}*/
#include<iostream>
using namespace std;
class Invent1
{ public:
    float a,b;
    Invent1(){}
     Invent1(int x,int y):a(x),b(y)
     {
     }
     operator float()
     {
       return (a+b);
     }
     void display()
     {
       cout<<"a = "<<a<<" b = "<<b<<endl;
     }
};
class invent2
{ float a,b;
public:
    invent2(){}

       invent2(Invent1 x)
     {
         a=x.a;
         b=x.b;
     }
     void display()
     {
       cout<<"a = "<<a<<" b = "<<b<<endl;
     }
};
int main()
{ Invent1 x(4,5);
  invent2 y;
  float z;
  z=x;
    cout<<"value of z = "<<z<<endl;
  y=x;
  y.display();
 return 0;
}
