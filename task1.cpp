#include<iostream>
using namespace std;
int number(int num1);
main()
{
int result;
int num1;
cout<<"Enter a number :";
cin>>num1;
result=number(num1);
cout<<"Result is :"<<result;
}
int number(int num1)
{
int a;
a=num1*5;
return a;
}