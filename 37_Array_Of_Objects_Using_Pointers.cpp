#include<iostream>
using namespace std ;
class shop {
    int id;
    float price;
public:
    void setdata(int r,float t) {
        id=r;
        price=t;
    }
    void getdata() {
        cout << "Id: " <<id<< endl;
        cout << "Price: $" <<price<< endl;
    }

};
int main() {
    int size;
    cout << "how many items: " << endl;
    cin >>size;

    shop* s1=new shop[size];
    int ID;
    float P;

    for(int i=0; i<size; i++) {
        cout << "enter ID of item no. : "<<i+1 << endl;
        cin>>ID;
        cout << "enter price of item no. : "<<i+1 << endl;
        cin >>P;
      (s1+i)->setdata(ID,P);
        
    }
    for(int i=0; i<size; i++) {
       ( s1+i)->getdata();
        
    }
delete[] s1;
    return 0;
}