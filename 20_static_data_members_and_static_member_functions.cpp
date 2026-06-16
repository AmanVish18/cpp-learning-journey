#include<iostream>
using namespace std ;
class majdoor {
    static int dihadii;

    int ID;
public :
    static int profit;
    void setdata(void);
    void getdata(void);
    //static function
    static void getincrement(void) {
        cout << "The increment you got: ₹"<<profit<< endl;
        profit=profit+50;
    }

};
//static data members
int majdoor::dihadii=500;
void majdoor:: setdata(void) {
    cout << "enter the ID no.:" << endl;
    cin >>ID;
}
void majdoor::getdata(void) {
    cout << "majdoor ID: " <<ID<< endl;
    cout << "Ajj ki dihadii teri: ₹"<<dihadii<< endl;
    dihadii=dihadii+50;
}
int majdoor::profit;

int main() {
    majdoor rohan,lalu,roshan;
    rohan.setdata();
    rohan.getdata();
    majdoor::getincrement();

    lalu.setdata();
    lalu.getdata();
    majdoor::getincrement();

    roshan.setdata();
    roshan.getdata();
    majdoor::getincrement();

    return 0;
}
Added practice of static data members and static member functions in C++