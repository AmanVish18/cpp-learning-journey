#include<iostream>
using namespace std;
//class:public and private 

class company{
    private:
    int years;
   int startsalary=60000;
  float factor=1.10;
    
    public:
    int e ;
    void setdata(int y1);
    void getdata(){
    cout << "your salary will be : ₹"<<((startsalary*factor)+(years*10000))<<endl;
    cout<<" if you are interested, Welcome!!"<<endl;
    }

};
void company :: setdata(int c1){
years=c1;
}
int main()
{
company employee;
int y;
    cout << "enter your company experience: " << endl;
    cin >> y;
    employee.setdata(y);
    employee.getdata();
    
    return 0;
}
Added company salary calculator using classes and objects