#include<iostream>
using namespace std ;
//constructor calling in inheritance
class base1 {
protected:
    int data1;
public :
    base1(int r) {
        data1=r;
        cout << "Base 1 constructor" << endl;
    }
    void printdata1() {
        cout << " value of data 1" <<data1<< endl;
    }
};
class base2 {
protected :
    int data2;
public :
    base2(int r) {
        data2=r;
        cout << "Base 2 constructor" << endl;
    }
    void printdata2() {
        cout << " value of data 1" <<data2<< endl;
    }
};
class Derived: public base1,virtual public base2 {
protected :
    int Derived1;
    int Derived2;
public:
    Derived(int a,int b,int c,int d):base1(a),base2(b) {
        Derived1=c;
        Derived2=d;

    }
    void printdata_derived() {
        cout << " value of Derived1 " <<Derived1<< endl;
        cout << " value of Derived2 " <<Derived2<< endl;
    }
};
int main() {
    Derived d1(2,4,5,3);
    d1.printdata1();
    d1.printdata2();
    d1.printdata_derived();
    return 0;
}