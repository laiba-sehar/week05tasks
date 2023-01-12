#include<iostream>
using namespace std;
void Hourmin(int hour,int min);
main()

{
 int hour,min;
 
 cout<<"Enter hours:";
 cin>>hour;
 cout<<"Enter minutes:";
 cin>>min;
 Hourmin(hour,min);


}
void Hourmin(int hour,int min)
{
 int hours,minute;
 if(min+15<=59)
{
 minute=min+15;
 cout<<"output is: "<<hours<<":"<<minute;
}

 if(min+15>=59)
{
 minute=min+15-60;
 hours=hour+1;

}
 if((hour+1)==24)
 {
 hours=00;
 
 }
cout<<"output is: "<<hours<<":"<<minute;
}