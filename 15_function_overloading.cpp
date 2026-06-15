#include<iostream>
using namespace std;
//function overloading
int sum(int a,int b,int c,int d){
return a+b+c+d;
}
int sum(int a ,int b){
return a*b;
}
int sum(int a,int x,int h){
return a*x*h;
}
int sum(int r){
return 3.14*r*r;
}
int main()
{
    cout << "Hello World!" << endl;
    cout << "the sum is: " <<sum(3,5,7,8)<< endl;
    cout << "the multiple is: " <<sum(8,9)<< endl;
    cout << "the area of cylinder is: " <<sum(7,8,9)<< endl;
    cout << "the area of circle is: "<<sum(7) << endl;
    return 0;
}
Added function overloading practice