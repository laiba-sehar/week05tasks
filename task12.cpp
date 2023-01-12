#include<iostream>
using namespace std;
float taxCalculator(char type,float price);
main()
{
char type;
float price;
float result;
cout<<"Enter vehicle type :";
cin>>type;
cout<<"Enter price :";
cin>>price;
result=taxCalculator(type,price);
cout<<"result is " <<result;
}
float taxCalculator(char type,float price)
{
float taxamount;

if(type=='M')
{
taxamount=price* (0.06);
price=price+taxamount; 
return price;
}
if(type=='E')
{
taxamount=price* (0.08);
price=price+taxamount;
return price; 
}
if(type=='S')
{
taxamount=price* (0.1);
price=price+taxamount; 
return price;
}
if(type=='V')
{
taxamount=price* (0.12);
price=price+taxamount; 
return price;
}
if(type=='T')
{
taxamount=price* (0.15);
price=price+taxamount; 
return price;
}
return 0;
}



