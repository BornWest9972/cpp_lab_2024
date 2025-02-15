#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double pi=M_PI;
	float radius,area,circumfernce;
	cout<<"enter  radius"<<endl;
	cin>>radius;
	area=pi*radius*radius;
	circumfernce=2*pi*radius;
	cout<<"the area is"<<area<<endl<<"the cirucummfernce is "<<circumfernce<<endl;
}
