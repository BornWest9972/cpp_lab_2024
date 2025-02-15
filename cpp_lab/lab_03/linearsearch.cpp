#include <iostream>
using namespace std;
void linearsearch(int ar[],int,int );
void main()
{
	int ar[10],n,s;
	cout<<"enter the number of element"<<endl;
	cin>>n;
	cout<<"enter the elements of array";
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cout<<"enter the element to search"; cin>>s;
	linearsearch(ar[],n,s);
}
void linearsearch( int ar[],int n, int s )
{
	int re=0,index=0;
	for (int i=0;i<n;i++);
	{
		if(s==ar[i])
		{
			index=i+1;
			re=1;
		}
	}

	if(re==1)
		cout<<"the element is in array at "<<index;
}
