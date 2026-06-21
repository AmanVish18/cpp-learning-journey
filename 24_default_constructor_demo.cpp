#include<iostream>
using namespace std ;
 //using constructor
 class sum{
 int a,b;
 public :
 sum();
 void print(){
 cout << "value is "<<a << " + "<<b<<"i"<<endl;
 }
};
 sum::sum(){
a=90;
b=89;
}
int main (){
sum s1;
s1.print();
return 0;
}