/*4. Create Product class and convert Product type to Item type using casting operator
int main()
{
Item i1;
Product p1;
p1.setData(3,4);

i1=p1;
return 0;
}*/
#include<iostream>
using namespace std;
class item
{ int i;
public:
    item(){}
     item(int x)
     { i=x;
     }
    void display()
    {
      cout<<"x = "<<i<<endl;
    }
};

class product
{ int x;
  int y;
public:
    product(){}
    product(int a,int b)
    { x=a;
      y=b;
    }
    int getx(){return x;}
    int gety(){return y;}

    operator item()
    {
      item i(x+y);
      return i;
    }
    void display()
    {
      cout<<"x = "<<x<<" y = "<<y<<endl;
    }
};

int main()
{
  product p(3,4);
  item i=p;
   p.display();
   i.display();
 return 0;
}
