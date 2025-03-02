#include <iostream>
using namespace std;
int add(int a, int b) {
if(( a<0 ) || (b<0)) {
throw "Enter positive number";
}
return (a+b);
}
int sub(int a, int b) {
if(( a<0 ) || (b<0)) {
throw " Enter positive number ";
}
return (a-b);
}

int division(int a, int b) {
if( (b == 0 ) || (a==0) ) {
throw "Enter a number greater than zero";
}
return (a/b);
}
int product(int a, int b) {
if(( a == 0 ) && (b==0)) {
throw " Enter a number greater than zero!"; }
return (a*b); }
int main () {
int x = 50;
int y = 0;
int z = 0;
try {
z = division(x, y);
cout << z << endl;
} catch (const char* msg) {
cerr << msg << endl; }
try {
z = product(x, y);
cout << z << endl;
} catch (const char* msg) {
cerr << msg << endl; }
try {
z = add(x, y);
cout << z << endl;
} catch (const char* msg) {
cerr << msg << endl; }
try {
z = sub(x, y);
cout << z << endl;
} catch (const char* msg) {
cerr << msg << endl; }
return 0; }