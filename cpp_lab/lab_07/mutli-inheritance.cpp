#include <iostream>
using namespace std;
class Vehicle
{
public:
void vehicle()
{
cout<<"I am a Vehicle"<<endl;
}
};
class FourWheeler : public Vehicle
{
public:
void fourwheeler()
{
cout<<"I have four Wheels"<<endl;
}
};
class Car : public FourWheeler
{
public:
void car()
{
cout<<"I am a Car"<<endl;
}
};
int main()
{
cout << "Happy Programming!" << endl;
Car Cobj;
Cobj.car();
Cobj.fourwheeler();
Cobj.vehicle();
return 0;
}