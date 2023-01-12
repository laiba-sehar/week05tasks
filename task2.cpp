#include<iostream>
using namespace std;
string alphabet(char input);
main()
{
 char input;
 string result;
    
 cout<<"Enter input :";
 cin>>input;
 result= alphabet(input);

 cout<<"result= "<<result;
}
string alphabet(char input)
{

 if(input=='A')
 {
  return "You entered capital A ";
 }
 if(input=='a')
 {
 return "You have entered small a";

 }
 return 0;
 
}