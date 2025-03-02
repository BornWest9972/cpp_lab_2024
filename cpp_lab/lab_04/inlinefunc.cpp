// Method 1
#include <iostream>
using namespace std;
inline void square(int numb);
int main()
{
cout << "Hello world!" << endl;
int numb ;
cout<<" Enter a numb to find square"<<endl;
cin>>numb;
cout<<"\nSquare of "<<numb<<" is \t ";
square(numb);
return 0;
}
void square(int numb)
{
cout<<numb*numb<<endl;
}

//Method 2
#include <iostream>
using namespace std;
class Square
{
int numb;
int res;
public:
inline void get_numb()
{
cout<<" Enter a numb to find square"<<endl;
cin>>numb;
}
inline void disp_square()
{
res = numb *numb;
cout<<"\nSquare of "<<numb<<" is \t " <<res<<endl;
}
};