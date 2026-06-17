#include<iostream>
using namespace std ;
class complex {
    int a,b;
public :
    friend complex sumdata(complex o1,complex o2);
    void setdata(void) {
        int n1,n2;
        cout << "enter the value first number:" << endl;
        cin >>n1;
        cout << "enter the value of second one :" << endl;
        cin >> n2;
        a=n1;
        b=n2;
    }
    void display(void) {
        cout << " your complex number is: " <<a<<" + "<<b<< "i"<<endl;

    }
};
complex sumdata(complex o1,complex o2) {

    complex o3;
    o3.a=((o1.a+o2.a));
    o3.b=((o1.b+o2.b));
    return o3;
}
int main() {
    complex c1,c2,c3;
    c1.setdata();
    c1.display();

    c2.setdata();
    c2.display();

    c3=sumdata(c1,c2);
    c3.display();

    return 0;

}