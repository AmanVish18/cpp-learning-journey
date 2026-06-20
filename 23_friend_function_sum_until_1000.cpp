#include<iostream>
using namespace std ;
class y;
class x {
    int data;
public :
    friend int sumdata(x o1, y o2);
    void indata(void) {
        cout << "enter the value of first: " << endl;
        cin >> data;
    }
};
class y {
    int Data;
public :
    friend int sumdata(x o1, y o2);
    void indata(void) {
        cout << "enter the value of first: " << endl;
        cin >> Data;
    }
};
int sumdata(x o1, y o2) {
    int o3=(o1.data+o2.Data);
    cout<<"Aura "<<o3<<"+"<<endl;
    return o3;
}
int main () {
    x c1;
    y c2;
    int sum;
    do {
        c1.indata();
        c2.indata();
        sum = sumdata(c1,c2);
    }
    while(sum<1000);
    return 0;
}