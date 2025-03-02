#include <iostream>
#include <iomanip>
using namespace std;
void area(float,float);
void area(float,double);
void area(float);
int main()
{
cout << "Happy Programming! Demonstrating Function Overloading" << endl<<endl;
float height,base;
cout<<"Calculate Area of Triangle for the following measurements"<<endl;
cout<<"\n Enter the Height of Triangle in cms: \t";cin>>height;
cout<<"\n Enter the Base of Triangle in cms: \t";cin>>base;
area(height,base);
float radius;
cout<<"Calculate Area of Circle for the following measurements"<<endl;
cout<<"\n Enter the radius of Circle in cms: \t";cin>>radius;
area(radius,3.14);
float side;
cout<<"Calculate Area of Square for the following measurements"<<endl;
cout<<"\n Enter the side of Square in cms: \t";cin>>side;
area(side);
return 0;
}
void area(float h,float b)
{
cout<<setw(30)<<"Area of Triangle:"<<setw(30)<<(0.5*h*b)<<endl;
}
void area(float r,double C)
{
cout<<setw(30)<<"Area of Circle:"<<setw(30)<<(C*r*r)<<endl;
}
void area(float s)
{
cout<<setw(30)<<"Area of Square:"<<setw(30)<<(s*s)<<endl;
}