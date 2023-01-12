#include<iostream>
using namespace std;
string func1(int num);
string func2(int num);
main()
{
 int num,left_digit,right_digit;
 string result1, result2;
 cout<<"Enter two digit number :";
 cin>>num;
 result1=func1(num);

 result2=func2(num);

 cout<<"Answer is :"<<result1<<" "<<result2;
}


string func1(int num)
{
 int Q1;
 int right_digit=num%10;
 Q1=num/10;
 int left_digit=Q1;

 if(left_digit==2)
 {
 return "Twenty";
 }
if(left_digit==3)
 {
 return "Thirty";
 }
if(left_digit==4)
{
 return "Forty";
}
if(left_digit==5)
{
 return "Fifty";
}
if(left_digit==6)
{
 return "Sixty";
}
if(left_digit==7)
{
 return "Seventy";
}
if(left_digit==8)
{
 return "Eighty";
}
if(left_digit==9)
{
 return "Ninty";
}
if(left_digit==4)
{
 return "Forty";
}
return 0;
}

string func2(int num){

 int Q1;
 int right_digit=num%10;
 Q1=num/10;
 int left_digit=Q1;
if(right_digit==1)
{
 return "One";
}
if(right_digit==2)
{
 return "Two";
}
if(right_digit==3)
{
 return "Three";
}
if(right_digit==4)
{
 return "Four";
}
if(right_digit==5)
{
 return "five";
}
if(right_digit==6)
{
 return "Six";
}
if(right_digit==7)
{
 return "Seven";
}
if(right_digit==8)
{
 return "Eight";
}
if(right_digit==9)
{
 return "Nine";
}
return "";
}