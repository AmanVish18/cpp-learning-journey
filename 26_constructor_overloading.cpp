#include<iostream>
using namespace std;
//constructor overloading 
class complex {
 int a ,b;
 public :
 complex(int x,int y){
 a=x;
 b=y;
 }
 complex(int x){
 a=x;
 b=0;
 }
 complex(){
 a=0;
 b=0;
 }
 void print(){
 cout << "your value is " <<a<<" + "<<b<<"i"<< endl;
 }
 }; 
 int main() {
 complex c1(5,9);
 complex c2(99);
 complex c3;
 c1.print();
 c2.print();
 c3.print();
 
 return 0;
 }