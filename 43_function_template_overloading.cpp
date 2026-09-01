#include<iostream>
using namespace std;
template <class T>
//function overloading in template
class aman {
public:
    T data;
    aman(T a) {
        data= a;
    }
    void display();
};
template<class T>
void aman<T>::display() {
    cout << data << endl;
}

void func(int a) {
    cout <<"I am first func() "<<a<< endl;
}
template<class T>
void func(T a) {
    cout <<"I am temperised func() "<<a<< endl;
}
template<class T>
void func1(T a) {
    cout <<"I am temperised func1() "<<a<< endl;
}

int main()
{
    aman<int> a(4);
    a.display();
    func(8);
    func(7.8);
    func1('c');
    return 0;
}