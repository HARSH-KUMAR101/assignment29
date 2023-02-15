/*6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e int )
to Time class.

Example-
int main()

{
int duration;
cout<<”Enter time duration in minutes”;
cin>>duration;
Time t1 = duration;
t1.display();
return 0;
}*/
#include<iostream>
using namespace std;
class time
{ int hr,min,sec;
public:
    time(int s)
    {  sec=(s%3600)%60;
        hr=s/3600;
       min=(s%3600)/60;
    }
     void display()
     {
       cout<<"hour = "<<hr<<" minute = "<<min<<" second = "<<sec<<endl;
     }
};
int main()
{ int duration;
   cout<<"enter time in seconds:";
   cin>>duration;
   time t1=duration;
   t1.display();
 return 0;
}
