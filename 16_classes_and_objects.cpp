#include<iostream>
using namespace std;
//class:public and private 

class students{
    private:
    int a,b,c;
    public:
    int e ;
    void setdata(int a1,int b1,int c1);
    void getdata(){
    cout << "The value of a:" <<a<< endl;
    cout << "The value of b:" <<b<< endl;
    cout << "The value of c:" <<c<< endl;
    cout << "The value of e:" <<e<< endl;
    }

};
void students :: setdata(int a1,int b1,int c1){
a=a1;
b=b1;
c=c1;
}
int main()
{
students aman;
aman.e=289;
int x,y,z;
    cout << "Hello World!" << endl;
    cout << "enter value of x,y and z respectively" << endl;
    cin >> x>>y>>z;
    aman.setdata(x,y,z);
    aman.getdata();
    
    return 0;
}
Added basic class and object practice with encapsulation