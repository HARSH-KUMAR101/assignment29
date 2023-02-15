/*7. Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
Time t1(2,30);
t1.display();
Minute m1;
m1.display();
m1=t1 // Fetch minute from time
t1.display();
m1.display();
return 0;
}*/
#include<iostream>
using namespace std;
class time
{ int hr,min;
 public:
    time(int hr,int min):hr(hr),min(min){}
      int gethr(){return hr;}
      int getmin(){return min;}

      void display()
      {
        cout<<"hour = "<<hr<<" min = "<<min<<endl;
      }

};
class minute
{ int min;
public:
    minute(){}
    void display()
    {
      cout<<"minutes = "<<min<<endl;
    }
      minute(time t)
      { min=(t.gethr()*60)+t.getmin();
      }

};
int main()
{ time t1(2,30);
  t1.display();

  minute m1;
  m1=t1;
  m1.display();
 return 0;
}
