#include <iostream>
#include <iomanip>
#define MAX 80
using namespace std;
class Person
{
private:
char Name[MAX];
char AadharNum[MAX];
char DOB[MAX];
public:
void GetPersonInfo()
{
cout<<"\n Enter the Name: \t";cin>>Name;
cout<<"\n Enter the Aadhar Number: \t";cin>>AadharNum;
cout<<"\n Enter the DOB in DD-MM-YYYY: \t";cin>>DOB;
}
void DisplayPersonInfo()
{
cout<<setw(30)<<" Name: "<<setw(30)<<Name<<endl;
cout<<setw(30)<<" Aadhar Number: "<<setw(30)<<AadharNum<<endl;
cout<<setw(30)<<" DOB: "<<setw(30)<<DOB<<endl;
}
};
class Teacher : public Person
{
char Department[MAX];
char Designation[MAX];
int Publication;
public:
void GetTeacherinfo();
void DisplayTeacherInfo();
};
class Student : public Person
{
char Department[MAX];
char RollNo[MAX];
public:
void GetStudentInfo();
void DisplayStudentInfo();
};
class Marks : public Student
{
int Sub1Mark;
int Sub2Mark;
int Sub3Mark;
public:
void GetStudentMarks();
void DisplayStudentMarks();
};
/* Member Function Definitions for class Marks*/
void Marks :: GetStudentMarks()
{
cout<<"\n Enter the Student Subject_1 Mark: \t";cin>>Sub1Mark;
cout<<"\n Enter the Student Subject_2 Mark: \t";cin>>Sub2Mark;
cout<<"\n Enter the Student Subject_3 Mark: \t";cin>>Sub3Mark;
}
void Marks :: DisplayStudentMarks()
{
cout<<setw(30)<<"Student Subject_1 Mark: "<<setw(30)<<Sub1Mark<<endl;
cout<<setw(30)<<"Student Subject_2 Mark: "<<setw(30)<<Sub2Mark<<endl;
cout<<setw(30)<<"Student Subject_3 Mark: "<<setw(30)<<Sub3Mark<<endl;
cout<<setw(30)<<"Percentage:"<<setw(30)<<((Sub1Mark+Sub2Mark+Sub3Mark)/3)<<"%"<<endl;
}
/* Member Function Definitions for class Student*/
void Student :: GetStudentInfo()
{
GetPersonInfo();
cout<<"Enter the Department: \t";cin>>Department;
cout<<"\n Enter the Roll Number: \t";cin>>RollNo;
}
void Student ::DisplayStudentInfo()
{
DisplayPersonInfo();
cout<<setw(30)<<" Department: "<<setw(30)<<Department<<endl;
cout<<setw(30)<<" Roll Number: "<<setw(30)<<RollNo<<endl;
}
/* Member Function Definitions for class Teacher*/
void Teacher :: GetTeacherinfo()
{
Person::GetPersonInfo();
cout<<"Enter the Department: \t";cin>>Department;
cout<<"\n Enter the Designation: \t";cin>>Designation;
cout<<"\n Enter the Number of Publication: \t";cin>>Publication;
}
void Teacher :: DisplayTeacherInfo()
{
DisplayPersonInfo();
cout<<setw(30)<<" Department: "<<setw(30)<<Department<<endl;
cout<<setw(30)<<" Designation: "<<setw(30)<<Designation<<endl;
cout<<setw(30)<<" Number of Publication: "<<setw(30)<<Publication<<endl;
}
/* Main Function */
int main()
{
cout << "Happy Programming!" << endl<<endl;
Teacher T[3];
char ch = 'y'; int i=0;
cout<<"*********Enter Teacher Details **********"<<endl<<endl;
do
{
T[i].GetTeacherinfo();
i++;
cout<<"Do you want to details of another Teacher type 'y' or 'n'"<<endl;
cin>>ch;
cout<<endl;
}while(ch!='n' && i<3);
cout<<"*********Display Teacher Details **********"<<endl<<endl;
for(int j=0;j<i;j++)
{
T[j].DisplayTeacherInfo();
}
cout<<endl<<"*********Enter Students Details **********"<<endl<<endl;
Marks S[3];
ch = 'y'; i=0;
do
{
S[i].GetStudentInfo();
S[i].GetStudentMarks();
i++;
cout<<"Do you want to details of another Student type 'y' or 'n'"<<endl;
cin>>ch;
cout<<endl;
}while(ch!='n' && i<3);
cout<<"*********Display Student Details **********"<<endl<<endl;
for(int j=0;j<i;j++)
{
S[j].DisplayStudentInfo();
S[j].DisplayStudentMarks();
}
return 0;
}