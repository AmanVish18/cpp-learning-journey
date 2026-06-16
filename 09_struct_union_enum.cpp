#include<iostream>
using namespace std ;
//structures
struct workers{
int WID;
float salary;
};
int main(){
struct workers aman;
aman.WID=246;
aman.salary=20000000;

     cout << "Aman's workers ID is:🪪" <<aman.WID<< endl;
     cout << "Aman's salary: ₹" <<aman.salary<< endl;
  cout  << endl;
   // typedef structure 
typedef struct students{
int SID;
float marks;

}s; 
s ram;
s ramesh;
ram.SID= 1;
ramesh.SID= 6;
ram.marks=99.99;
ramesh.marks=78;
cout << "RAM's marks: "<< ram.marks<<"%"<< endl;
cout << "Ramesh's marks: " <<ramesh.marks<<"%"<< endl;
cout << "Ram's SID: " <<ram.SID<< endl;
cout << "Ramesh's SID: " <<ramesh.SID<< endl;
cout << endl;
//union 
typedef union A1{
int rice;//in kg
float dollar;// money 


}f;
f begger_1;
f begger_2;
//begger_1.rice=82;
//begger_2.rice=84;
begger_1.dollar=300;
begger_2.dollar=3000;
//cout << "rice for Begger 2: " <<begger_2.rice<< endl;
//cout << "rice for Begger 1: "<<begger_1.rice << endl;
cout << "money for begger 2: "<<begger_2.dollar<<"$" << endl;
cout << "money for begger 1: "<<begger_1.dollar<<"$" << endl;

cout << endl;
//enum
enum roommate{khushi,a_man,rohit};
cout << "khushi at "<<khushi+1<<" position.!❤️" <<endl;
cout << "Aman at "<<a_man+1 <<" position.!❤️" <<endl;
cout << "Rohit at "<<rohit+1<<" position.!❤️" <<endl;
cout << endl;
cout << " Thats it ,I hope you enjoyed my code ❤️" << endl;
   return 0;
   }
