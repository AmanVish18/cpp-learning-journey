#include<iostream>
using namespace std ;
//example of single inheritance in class!!
class base {
    int data1;
public :
    int data2;
    void setdata(void);
    int getdata1();
    int getdata2();
};
void base::setdata(void) {
    data1=2;
    data2=7;
}
int base:: getdata1() {
    return data1;
}
int base:: getdata2() {
    return data2;
}
class derived: public base {
    int data3;
public :
    void process() {
        data3=(getdata1()*data2);
    }
    void display() {
        cout << "the value of data 1 is : " << getdata1() << endl;
        cout << "the value of data 2 is : " << data2 << endl;
        cout << "the value of data 3 is : " << data3 << endl;
    }
};
int main() {
    derived D1;
    D1.setdata();

    D1.process();
    D1.display();
    return 0;
}