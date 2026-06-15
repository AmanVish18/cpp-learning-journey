#include<iostream>
#include<string>
using namespace std;
//nexting of members
class binary{
string s;

public :
void read(void);
void chk(void);
void ones_compliment(void);
void display(void);
};
void binary::read(void){
cout << "Enter your binary numbers" << endl;
cin >> s;
}
void binary::chk(void){
for(int a=0; a<s.length();a++){
if (s.at(a)!='1' && s.at(a)!='0'){
     cout << "incorrect binary format!!!!" << endl;
     exit(0);
    }
  }
}
void binary::ones_compliment(void){
for(int a=0; a<s.length();a++){
    if(s.at(a)=='1'){
   s.at(a)='0';
   }
    else{
   s.at(a)='1';
     }
    }}
   
void binary::display(void){
cout << "Displaying your binary numbers" << endl;
for(int a=0; a<s.length();a++){
  cout << s.at(a) ;
 }cout << endl;
}


int main()
{
    binary b;
    b.read();
    b.chk();
    b.display();
    b.ones_compliment();
    b.display(); 
    return 0;
}
Added binary validation and ones complement using OOP