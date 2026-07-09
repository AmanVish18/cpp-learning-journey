#include<iostream>
using namespace std ;
//example of multiple interitnce in class!!
/*
Table:
                   private derivation    public derivation    protected derivation
1.private members :   not interited         not interited         not interited
2.public members :    private               public                protected
3.protected members : private               protected             protected

*/
//so how the inherited Derived class looks;
/*
Data members :
Data1=protected
Data2=protected
members functions :
set_data1()=public
set_data2()=public
show()=public
*/
class base1 {
protected :
    int Data1;
public:
    void set_data1(int a){
    Data1=a;
    }
    

}; 
class base2 {
protected:
    int Data2;
public:
   void set_data2(int a){
   Data2=a;
   } 
};

class Derived :public base1,public base2{
public :
    void show(){
    cout << "the value of Data 1 : "<<Data1<< endl;
    cout << "the value of Data 2 : "<<Data2 << endl;
    cout << "the value of sum of both  Data: "<<Data1+Data2<< endl;
    }
};
int main() {
    Derived d1;
    d1.set_data1(90);
    d1.set_data2(9);
    d1.show();
    return 0;
}