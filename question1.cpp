/*1.Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
  Complex c1;
  Int x=5;
  c1=x;
return 0;
}*/
#include<iostream>
using namespace std;
class complex
{ int real;
  int img;
public:
    complex(){}
   complex(int a)
   { real=a;
     img=a;
   }

   void display()
   {
     cout<<"complex number is "<<real<<" + "<<img<<"i"<<endl;
   }
};
int main()
{ complex c1;
   int x=5;
   c1=x;
    c1.display();
return 0;
}
