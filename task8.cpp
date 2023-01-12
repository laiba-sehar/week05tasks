#include<iostream>
using namespace std;
void func(int V,int P1,int P2,float H);
main()

{
int volume;
int P1,P2;
float Hour;
cout<<"Enter volume of the pool :";
cin>>volume;
cout<<"Enter Flow rate of pipe 1 :";
cin>>P1;
cout<<"Enter Flow rate of pipe 2 :";
cin>>P2;
cout<<"Enter Hours :";
cin>>Hour;
func(volume,P1,P2,Hour);

}
void func(int V,int P1,int P2,float H)
{
 int var1,var2,var;
 int percentage;
 var1=P1*H;
 var2=P2*H;
 var=var1+var2;
 percentage=var*100/V;
 int pipe1=var1*100/var;
 int pipe2=var2*100/var;
if(var<=V)
{
cout<<"The pool is "<<percentage<<"% full Pipe1 :"<<pipe1<<"%. pipe2 :"<<pipe2<<"%";  
} 
if(var>=V)
{
int result=var-V;
cout<<"For "<<H<<" the pool overflows with "<<result<< "liters";
}



}

