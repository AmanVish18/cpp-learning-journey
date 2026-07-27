#include<iostream>
using namespace std;
class base
{
protected :
    int var_base=1;
public :
    /* void display () {
          cout << "1.runing base class variable " <<var_base<< endl;
      } */
    //but with virtual function
    virtual  void display () {
        cout << "1.runing base class variable " <<var_base<< endl;
    }
};
class derived:public base
{
protected :
    int var_derived=2;
public :
// because of the virtual function derived class display runs
    void display () {
        cout << "2.runing base class variable " <<var_base<< endl;
        cout << "2.runing derived class variable" <<var_derived<< endl;
    }
};
int main()
{

    cout << "Hello world" << endl;
    base* base_class_pointer;
    base base_obj;
    derived derived_obj;
    // now this line is usefull with virtual function in base class
    base_class_pointer=&derived_obj;
    base_class_pointer->display();
    return 0;
}