#include<iostream>
using namespace std;
//template in default and multiple parameters
template < class T1= int,class T2= float,class T3= char >

class Aman {
public :
    T1 a;
    T2 b;
    T3 c;
    Aman(T1 x,T2 y,T3 z) {
        a=x;
        b=y;
        c=z;
    }
    void display() {
        cout << "The value of a is : " <<a<< endl;
        cout << "The value of b is : " <<b<< endl;
        cout << "The value of c is : " <<c<< endl;
    }

};

int main() {

    Aman <> A(5,1.09,'g');
    A.display();
    cout << endl;
    Aman<char,float,int> a('c',6.88,9);
    a.display();
    return 0;
}