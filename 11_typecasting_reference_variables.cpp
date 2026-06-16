#include<iostream>
#include<iomanip>

using namespace std;
int main(){
cout<<"now i am starting typecasting and reference variables"<<endl;
cout<<endl;
cout<< "float,double,and long literals " << endl;
float f=3.38F;
long double g=3.4l;
cout<<"the size  of 3.38f: "<<sizeof 3.38f<<endl;
cout<<"the size  of 3.38F: "<<sizeof 3.38F<<endl;
cout<<"the size  of 3.4l: "<<sizeof 3.4l<<endl;
cout<<"the size  of 3.4L: "<<sizeof 3.4L<<endl;
cout<<endl;
cout<<"reference variables"<<endl;
long double x=3.00078;
long double& y=x;
cout<< "the value of x is: " <<x<<endl;
cout<< "the value of y is also: "<<y<<endl;
cout<<endl;
cout<< "typecasting" << endl;
int a=12;
long double b=23.339909;
float c=67.88;
double d=5.4444;
cout<< "the value of int b is: " <<(int)b<< endl;
cout<< "the value of float b is: " <<(float)b<< endl;
cout<< "the value of double b is: " <<(double)b<< endl;
cout<< "the value of  b is: " <<b<< endl;
cout<<endl;
cout << "the value of the expression (a+int(b): " <<(a+int(b))<< endl;
cout << "the value of the expression (a+b):" <<(a+b)<< endl;
cout << "the value of the expression (a+double(b):" <<(a+double(b))<< endl;
cout << "the value of the expression (a+float(b):" <<(a+float(b))<< endl;
cout<<endl;
//this is my practice so dontjudge 
cout << "using constant" << endl;
const int v=555;
cout<<v<<endl;
//manipulators
//now setw use with and without
cout << "Without setw" << endl; 
cout << "the value of a without setw: " <<a<< endl;
cout << "the value of b without setw: " <<b<< endl;
cout << "With setw" << endl;
cout << "the value of a with setw:   "<<setw(3)<<a<< endl;
cout << "the value of b with setw:   " <<setw(3)<<b<< endl;
cout<<endl;
//operator precedence
long double n=(((((a*b)+4)+c)-d)+87);
cout<<"the value of n according to precedence operator is:"<<n<<endl;
cout << "f is: " <<f<< endl;
cout << "g is: " <<g<< endl;
return 0;
}
