#include<iostream>
using namespace std;
template<class T>
class Vector {
public :
    T* arr;
    int size;

    Vector(int m ) {
        size= m ;
        arr= new T[size];
    }
    T dot_product(Vector &v) {
        T d;
        d=0;
        for(int i=0; i<size; i++) {
            d+= this->arr[i]* v.arr[i];
        }

        return d;
    }
};

int main() {

    Vector <float>v1(3);
    v1.arr[0] = 7;
    v1.arr[1] = 8;
    v1.arr[2] = 9;

    Vector <float>v2(3);
    v2.arr[0]= 8.4;
    v2.arr[1]=7.7;
    v2.arr[2]= 0.69;
    cout <<   v1.dot_product(v2);
    return 0;
}