#include <iostream>
using namespace std;
int main()
{
	int n,re=0;
	cout<<"enter the number"<<endl;
	cin>>n;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			re=1;
	}
	if(re==1)
		cout<<"the number is not prime";
	else
		cout<<"the number is prime";
}

