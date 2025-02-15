#include <iostream>
using namespace std;
int main()
{
	int arr[10];
	int max,min,temp,temp2,sum=0,n=0;
	cout<<"enter the number elemnts you want to enter"; cin>>n;
	cout<<"enter the elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	max,min=arr[0];
	for (int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			temp=max;
			max=arr[i];
			arr[i]=temp;
		}
		else if(arr[i]<min)
		{
			temp2=min;
			min=arr[i];
			arr[i]=temp2;
		}
	}
	for(int j=0;j<n;j++)
	{
		sum+=arr[j];
	}
	cout<<"the max of array is"<<max<<endl;
	cout<<"the min of array is"<<min<<endl;
	cout<<"the sum of array is"<<sum<<endl;
	return 0;
}
