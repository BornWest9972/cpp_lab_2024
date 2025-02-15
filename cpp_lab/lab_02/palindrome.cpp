# include <iostream>
using namespace std;
int main()
{
	int n,rem,rev,digit=0;
	cout<<"enter the number"<<endl;
	cin>>n;
	int m;
	m=n;
	while(m!=0)
	{
		digit=m%10;
		rev=(rev*10)+digit;
		m=m/10;
	}
	if(rev==n)
	{
		cout<<"the number is palindrome"<<endl;
	}
	else
		cout<<"the number is not palindrome"<<endl;
	return 0;
}

