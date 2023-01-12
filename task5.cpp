#include<iostream>
#include<cmath>
using namespace std;
float sum(int a,int b,int c);
float subtract(int a,int b,int c);
main()
{
int a,b,c;
float result;
float result2;
cout<<"Enter value of a :";
cin>>a;
cout<<"Enter value of b :";
cin>>b;
cout<<"Enter value of c :";
cin>>c;
result=sum(a,b,c);
cout<<"Result= "<<result;
result2=subtract(a,b,c);
cout<<"Result 2 is "<<result2;
}
float sum(int a,int b,int c)
{
float power;
float squareroot;
float var1;
float var2;
power=pow(b,2);
var1=(power)-(4*a*c);
squareroot=sqrt(var1);
var2=(-b-squareroot)/(2*a);
return var2;
}
float subtract(int a,int b,int c)
{
float power;
float squareroot;
float var1;
float var2;
power=pow(b,2);
var1=(power)-(4*a*c);
squareroot=sqrt(var1);
var2=(-b+squareroot)/(2*a);
return var2;
}