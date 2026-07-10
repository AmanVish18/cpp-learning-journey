#include<iostream>
using namespace std ;
//example of virtual class interitnce
//resolve ambiguity
/*
Table:
                   private derivation    public derivation    protected derivation
1.private members :   not interited         not interited         not interited
2.public members :    private               public                protected
3.protected members : private               protected             protected

*/
class students {
protected :
    int rollnum;
public:
    void set_num(int);
    void get_num() {
        cout << "Roll number: " <<rollnum<< endl;
    }

};
void students::set_num(int s) {
    rollnum=s;
}
class exam: virtual public students {
protected:
    float maths, chemistry, physics ;
public:
    void set_marks(float,float,float);
    void get_marks() {
        cout << "Physics marks: " <<physics<< endl;
        cout << "Chemistry marks: " <<chemistry<< endl;
        cout << "Maths marks: " <<maths<< endl;
    }
};
void exam:: set_marks(float m1,float m2,float m3) {
    maths= m1;
    physics = m2;
    chemistry = m3;
}
class sports:virtual public students {
protected:
    int score;
public :
    void set_score(int sc) {
        score=sc;
    }
    void get_score() {
        cout << "your pt score is : " <<score<< endl;
    }
};
class result: public exam,public sports {
    float percentage ;
public :
    void display () {
        get_num();
        get_marks();
        get_score();
        percentage=  ((physics+chemistry+maths+score)/310)*100;
        cout << "Result: "
             <<percentage
             <<"%"<< endl;
    }
};
int main() {
    result r1;
    r1.set_num(01);
    r1.set_marks(95,98,96);
    r1.set_score(9);
    r1.display();
    return 0;
}