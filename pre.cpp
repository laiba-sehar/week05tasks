#include<iostream>
#include<cmath>
using namespace std;
main()
{
int num1;
int num2;
int minimum;
int power;
int squareroot;
int cuberoot;
float maximum;
cout<<"Enter number1 :";
cin>>num1;
cout<<"Enter number2 :";
cin>>num2;
minimum=min(num1,num2);
cout<<minimum<<" is minimum"<<endl;
maximum=max(num1,num2);
cout<<maximum<<" is maximum"<<endl;
power=pow(num1,num2);
cout<<power<<endl;
squareroot=sqrt(num1);
cout<<squareroot<<"is square";

}