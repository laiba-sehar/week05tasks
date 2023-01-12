#include<iostream>
using namespace std;
string OddishorEvenish(int number);
main()
{
int number;
string result;
cout<<"Enter a number";
cin>>number;
result= OddishorEvenish(number);
cout<<"output is :"<<result;
}
string OddishorEvenish(int number)
{
int sum,R1,Q1,R2,Q2,R3,Q3,R4,Q4,R5,Q5 ;
R1=number%10;
Q1=number/10;
R2=Q1%10;
Q2=Q1/10;
R3=Q2%10;
Q3=Q2/10;
R4=Q3%10;
Q4=Q3/10;
R5=Q4%10;
Q5=Q4/10;
sum=R1+R2+R3+R4+R5;
if(sum%2==0)
{
return "Evenish";
}
if(sum%2 != 0)
{
return "Oddish";
}
return 0;

}
