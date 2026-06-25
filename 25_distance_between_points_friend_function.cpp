#include<iostream>
#include<cmath>
using namespace std;
class point {
    float x;
    float y;
    float u,v;
public:
    friend double distance(point p1,point p2);
    void setdata1() {
        cout << "enter the first point " << endl;
        cin >> x>>y;
    }
    void setdata2() {
        cout << "enter the second point " << endl;
        cin >> u>>v;
    }


    void displaypoint(double i) {
        cout << "Distance between those points." << endl;
        cout <<i<< " units" << endl;
    }

};
double distance(point p1,point p2) {
    double sq;
    sq=(((p2.u-p1.x)*(p2.u-p1.x))+((p2.v-p1.y)*(p2.v-p1.y)));
    return sqrt(sq);
}
int main() {
    point num1,num2,out;
    num1.setdata1();
    num2.setdata2();
    double dis;
    dis= distance(num1,num2);
    out.displaypoint(dis);
    return 0;
}