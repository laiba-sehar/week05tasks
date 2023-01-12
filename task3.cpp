#include<iostream>
using namespace std;
bool istrue(int number);
main()
{
int number;
int result;

cout<<"Enter 3 digit number :";
cin>>number;

result=istrue(number);
cout<<"result= "<<result;

}
bool istrue(int number)
{
int R1,Q1,R2,Q2,R3;
 R1=number%10;
 Q1=number/10;
 R2=Q1%10;
 Q2=Q1/10;
 R3=Q2;
 if(R1==R3)
 {
 return true;
 }
 if(R1!=R3)
{
 return false;
}
 return 0;
}
