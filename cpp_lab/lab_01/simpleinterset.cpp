#include <iostream>
using namespace std;
int main()
{

	float p,r,s,t,si;
	cout<<"enter priciple amount";
	cin>> p;
	cout<<"enter rate of interset:";
	cin>> r;
	cout<<"enter time period:";
	cin>>t;
	si=(p*r*t)/100;
	cout<<"\n simple interset amount:"<<si<<endl;
}
