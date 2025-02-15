#include <iostream>
using namespace std;
#include <math.h>
int main()
{

	float s1,s2,s3;
	cout<<"enter the sides of triangle"<<endl;
	cin>>s1>>s2>>s3;
	float s=(s1+s2+s3)/2;
	float area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
	cout<<"area of triangle is ="<<"\t"<<area;
}
