/*10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.

Example-
int main()

{
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
}*/
#include<iostream>
using namespace std;
class rupee
{ public:
  int rs;
    rupee(int x):rs(x){}

       void display()
    {
      cout<<"rupee = "<<rs<<endl;
    }
};
class dollar
{public:
  int d;
     dollar(rupee r)
     {
       d=r.rs;
     }

    void display()
    {
      cout<<"dollar = "<<d<<endl;
    }
};
int main()
{
 rupee r = 23;
 dollar d = r; // Rupee to Dollar conversion
 d.display();
 r.display();

 d.display();
 r.display();
return 0;

}
