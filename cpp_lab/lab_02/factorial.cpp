#include <iostream>
using namespace std;
int main()
{
	int n;
	int factorial=1;
	cout<<"enter the number to find factorial"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	cout<<"the facotial of "<<n<<" is "<< factorial<<endl;
        return 0;
}
