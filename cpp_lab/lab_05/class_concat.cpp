#include <iostream>
#include <string.h>
#include <iomanip>
#define MAX 80
using namespace std;
class STRING
{
char str[MAX];
public:
STRING()
{
str[0]='\0';
}
STRING(const char pstr[])
{
strcpy(str,pstr);
}
STRING strconcat(STRING X)
{
STRING temp;
if(strlen(str)+strlen(X.str)<MAX)
{
strcpy(temp.str,str);
strcat(temp.str,X.str);
}
return temp;
}
void display()
{
cout<<setw(30)<<"The string is:\t"<<str<<endl;
}
};
int main()
{
cout << "Happy Programming!" << endl;
STRING S1,S2("Hello"),S3("MSRIT");
cout<<"The uninitialized string for object S1 using constructor with no arg is:"<<endl;
S1.display();
cout<<"The initialized string for object S2 using parametrized constructor is:"<<endl;
S2.display();
cout<<"The initialized string for object S3 using parametrized constructor is:"<<endl;
S3.display();
cout<<endl<<"Concatenating object S2 with object S3"<<endl;
S1 = S2.strconcat(S3);
S1.display();
return 0;
}