/*9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.

Example-
int main()

{
int x = 50;
Dollar d;
d = x;
d.display();
return 0;
}*/
#include<iostream>
using namespace std;
class dollar
{ int d;
public:
    dollar(){}

    dollar(int x):d(x){}
    void display()
    {
      cout<<"dollar is "<<d<<endl;
    }

};
int main()
{
int x = 50;
dollar d;
d = x;
d.display();
return 0;
}
