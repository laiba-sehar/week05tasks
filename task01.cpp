#include<iostream>
#include<cmath>
using namespace std;
float calculateheight(float degree,float distance);
main()
{
 float result;
 float angle;
 float distance;
 cout<<"Enter angle:";
 cin>>angle;
 cout<<"Enter distance:";
 cin>>distance;
 result=calculateheight(angle, distance);
 cout<<result;

}
float calculateheight(float degree,float distance)
{
 float radian=57.2958;
 float radians;
 float angle;
 float height; 
 radians=degree/radian;
 angle=tan(radians);
 height=angle*distance;
 return height;
}