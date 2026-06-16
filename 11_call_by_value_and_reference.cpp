#include<iostream>
using namespace std ;
//call by value
/*void sum(int a,int b){
int s=a;
a=b;
b=s;
}*/
//call by reference by using pointers
/*void pointsum(int* a,int* b){
int s=*a;
*a=*b;
*b=s;
}*/
void refesum( int &a,int &b){
int s=a;
a=b;
b=s;
}

int main(){
int x=9,y=5;
cout << "the value of x is:" <<x<< endl;
cout << "the value of y is:"<<y << endl;
/*sum(x,y);
cout << "the value of x is:" <<x<< endl;
cout << "the value of y is:"<<y << endl;*/
/*pointsum(&x,&y);
cout << "the value of x is:" <<x<< endl;
cout << "the value of y is:"<<y << endl;*/
refesum(x,y);
cout << "the value of x is:" <<x<< endl;
cout << "the value of y is:"<<y << endl;
return 0 ;
}
