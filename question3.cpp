/*3. Create a Product class and convert Product type to Item type using constructor
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
class product
{ int x;
  int y;
public:
    product(){}
     void setData(int a,int b)
     { x=a;
       y=b;
     }
     int getx()
     {
       return x;
     }
     int gety()
     {
       return y;
     }
};
class item
{ int i;
  int j;
public:
    item(){}
     item(product p)
     { i=p.getx();
       j=p.gety();
     }
    void display()
    {
      cout<<"x = "<<i<<" and y = "<<j<<endl;
    }
};
int main()
{ item i1;
  product p1;
   p1.setData(4,5);
  i1=p1;
  i1.display();
 return 0;
}

