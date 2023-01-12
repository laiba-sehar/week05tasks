#include<iostream>
using namespace std;
void func(int neededHours,int NoOfDays,int NoOfworkers);
main()
{
int neededHours;
int NoOfDays;
int NoOfworkers;


int result1;
cout<<"Enter needed hours : ";
cin>>neededHours;
cout<<"Enter number of days :";
cin>>NoOfDays;
cout<<"Enter number of workers :";
cin>>NoOfworkers;
func(neededHours,NoOfDays,NoOfworkers);


}
void func(int neededHours,int NoOfDays,int NoOfworkers)
{
int Days;
int TotalHours;
Days=NoOfDays-(0.1*NoOfDays);
TotalHours=10;
float Total=Days*TotalHours*NoOfworkers;
int result1=Total-neededHours;
int result2=neededHours-Total;

if(Total>neededHours)
{  
cout<< "Yes "<<result1<<" hours left";
}

  if(Total<neededHours)
{ 
cout<<"not enough time "<<result2<<" hours needed";
}

}
