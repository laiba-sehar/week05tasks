#include<iostream>
using namespace std;
void function(int length,int width,int height,string unit);
main()
{
int length,width,height;
string unit;
cout<<"Enter length :";
cin>>length;
cout<<"Enter width :";
cin>>width;
cout<<"Enter height :";
cin>>height;
cout<<"Enter unit";
cin>>unit;

function(length,width,height,unit);

}
void function(int length,int width,int height,string unit)
{
int volume;
float totalVol;
float var1,var2,var3;
volume=length*height*width;
totalVol=volume/3;
if(unit=="centimeters")
{
 var1=totalVol*1000000;
 cout<< var1;
} 

if(unit=="kilometers")
{
 var2=totalVol/1000000000;
 cout<< var2;
}
if(unit=="millimeters")
{
 var3=totalVol*1000000000;
 cout<< var3;
}  

}