#include<iostream>
#include<string>
using namespace std ;

class AV {
protected:
    string name;
    int book_num;
public:
    AV() {}
    AV( string s, int i) {
        name = s;
        book_num = i;
    }
    virtual void display () {}
    virtual~AV() {}
};

class credit:public AV {
    int days;
public:
    credit(string s,int i,int d):AV(s,i) {
        days=d;

    }
    void display()override {
        cout << "Name: " <<name<< endl;
        cout << "Book number: " <<book_num<< endl;
        cout << "Credit for days: " <<days<< endl;

    }
};
class money:public AV {
    int charges;
public:
    money(string s,int i,int c):AV(s,i) {
        charges=c;

    }
    void display()override {
        cout << "Name: " <<name<< endl;
        cout << "Book number: " <<book_num<< endl;
        cout << "charges for a day: $" <<charges<< endl;

    }
};
int main() {
    string name;
    int book_num;
    int charges;
    int days;
    name = "Aman" ;
    book_num = 143;
    charges = 5;
    days = 30;
    credit cr(name,book_num,days);
    money  mo(name,book_num,charges);
    AV* AV_pointer[2];
    AV_pointer[0]= &cr;
    AV_pointer[1]= &mo;
    AV_pointer[0]->display();
    cout << "________________________" << endl;
    AV_pointer[1]->display ();
    return 0;
}