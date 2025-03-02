#include <iostream>
#include<iomanip>
using namespace std;
void add(int,int);
void add(float,float);
int main()
{
cout << "Happy Programming! Demonstrating Function Overloading" << endl<<endl;
int num1,num2;
cout<<"Addition of 2 numbers by calling function add(int,int);"<<endl;
cout<<"\n Enter the First Number: \t";cin>>num1;
cout<<"\n Enter the Second Number: \t";cin>>num2;
add(num1,num2);
float fnum1,fnum2;
cout<<"Addition of 2 numbers by calling function void add(float,float);"<<endl;
cout<<"\n Enter the First Number: \t";cin>>fnum1;
cout<<"\n Enter the Second Number: \t";cin>>fnum2;
add(fnum1,fnum2);
return 0;
}
void add(int n1,int n2)
{
cout<<setw(30)<<" Result of Addition of int numbers"<<setw(30)<<(n1+n2) <<endl;
}
void add(float fn1,float fn2)
{
cout<<setw(30)<<" Result of Addition of float numbers"<<setw(30)<<(fn1+fn2)<<endl;
}