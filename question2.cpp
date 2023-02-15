/*Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
return 0;
}*/
#include<iostream>
using namespace std;
class complex
{ int real;
  int img;
public:
    complex(int a,int b)
    { real=a;
      img=b;
    }
     operator int()
     {
       return (real+img);
     }

};
int main()
{ complex c1(4,5);
  int x=c1;

     cout<<"complex to int number is "<<x<<endl;
  return 0;
}
