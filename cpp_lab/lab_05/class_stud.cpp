#include <iostream>
#include <iomanip>
using namespace std;
class STUDENT
{
char Name[30];
char RollNo[30];
int Sub1Mark;
int Sub2Mark;
int Sub3Mark;
char grade;
public:
void getdetail();
void calculategrade();
void displaydetail();
};
void STUDENT :: getdetail()
{
cout<<"*****Enter the details of the student****"<<endl;
cout<<"\n Enter the Student Name: \t";cin>>Name;
cout<<"\n Enter the Student Roll Number: \t";cin>>RollNo;
cout<<"\n Enter the Student Subject_1 Mark: \t";cin>>Sub1Mark;
cout<<"\n Enter the Student Subject_2 Mark: \t";cin>>Sub2Mark;
cout<<"\n Enter the Student Subject_3 Mark: \t";cin>>Sub3Mark;
}
void STUDENT :: calculategrade()
{
float avg = (Sub1Mark+Sub2Mark+Sub3Mark)/3;
if(avg>=91 && avg <= 100)
grade = 'S';
else if(avg>=81 && avg <= 90)
grade = 'A';
else if(avg>=71 && avg <= 80)
grade = 'B';
else if(avg>=61 && avg <= 70)
grade = 'C';
else if(avg>=51 && avg <= 60)
grade = 'D';
else if(avg>=40 && avg <= 50)
grade = 'E';
else
grade = 'F';
}
void STUDENT ::displaydetail()
{
calculategrade();
for(int i=0;i<10;i++)
cout<<"*\t";
cout<<endl;
cout<<setw(30)<<"Student Name: "<<setw(30)<<Name<<endl;
cout<<setw(30)<<"Student Roll Number: "<<setw(30)<<RollNo<<endl;
cout<<setw(30)<<"Student Subject_1 Mark: "<<setw(30)<<Sub1Mark<<endl;
cout<<setw(30)<<"Student Subject_2 Mark: "<<setw(30)<<Sub2Mark<<endl;
cout<<setw(30)<<"Student Subject_3 Mark: "<<setw(30)<<Sub3Mark<<endl;
cout<<setw(30)<<"Student Grade: "<<setw(30)<<grade<<endl;
for(int i=0;i<10;i++)
cout<<"*\t";
cout<<endl;
}
int main()
{
cout << "Happy Programming!" << endl;
STUDENT S[3];
char ch = 'y'; int i=0;
do
{
S[i].getdetail();
i++;
cout<<"Do you want to details of another Student type 'y' or 'n'"<<endl;
cin>>ch;
cout<<endl;
}while(ch!='n' && i<3);
for(int j=0;j<i;j++)
{
S[j].displaydetail();
}
return 0;
}