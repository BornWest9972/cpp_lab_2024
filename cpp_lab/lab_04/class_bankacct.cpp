#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class bank_acct
{
char cust_name[30];
char cust_accno[30];
float balance;
public:
bank_acct()
{
cust_name[0] ='\0';
cust_accno[0] ='\0';
balance = 500;
}
void read_details();
void deposit();
void withdraw();
void display_balance();
void display_details();
void searchAcc(char[],char);
};
inline void bank_acct :: read_details()
{
cout<<"Enter the details of the customer"<<endl;
cout<<"\n Enter the Customer Name: \t";cin>>cust_name;
cout<<"\n Enter the Customer Account Number: \t";cin>>cust_accno;
}
inline void bank_acct :: deposit()
{
int depamt;
cout<<"\n Enter Deposit Amount = ";
cin>>depamt;
balance+=depamt;
}
inline void bank_acct :: withdraw()
{
int wdamt;
cout<<"\n Enter Withdraw Amount = ";
cin>>wdamt;
if(wdamt>balance)
cout<<"\n Cannot Withdraw Amount";
balance-=wdamt;
}
inline void bank_acct :: searchAcc(char AccNum[],char op)
{
if(!(strcmp(cust_accno,AccNum)))
{
if(op == 'd')
deposit();
else
withdraw();
display_balance();
}
}
inline void bank_acct :: display_balance()
{
cout<<" The balance amount of "<< cust_name<<endl;
display_details();
}
inline void bank_acct :: display_details()
{
cout<<setw(30)<<"Customer Name: "<<setw(30)<<cust_name<<endl;
cout<<setw(30)<<"Account Number: "<<setw(30)<<cust_accno<<endl;
cout<<setw(30)<<"Balance: "<<setw(30)<<balance<<endl;
}
int main()
{
cout << "Happy Programming!" << endl;
char ch = 'y',c='s';
int i=0;
char AccNo[30];
bank_acct B[10];
// Code to Create Account for Customers
do
{
B[i].read_details();
i++;
cout<<"Do you want to create account for another customer type 'y' or 'n'"<<endl;
cin>>ch;
}while(ch!='n');
// Code For Transaction
cout<<"Enter the account number for deposit/ withdraw "<<endl;
cout<<"Account Number: \t";cin>>AccNo;
cout<< "Enter Transaction deposit/ withdraw ? type (d/w) \t ";cin>>c;
for(int j=0;j<i;j++)
{
B[j].searchAcc(AccNo,c);
}
return 0;
}