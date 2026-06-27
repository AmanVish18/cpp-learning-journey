#include<iostream>
using namespace std ;
class bankdeposit{
int principal;
int years;
float intrestrate;
float amount ;
public :
bankdeposit(){}
bankdeposit(int p,int y,float r);
bankdeposit(int p,int y,int r);
void show();
};
bankdeposit::bankdeposit(int p,int y,float r){
principal =p;
years=y;
intrestrate =r;
amount=principal;
for ( int i=0;i<y;i++){
amount = amount*(1+intrestrate);
}
}
bankdeposit::bankdeposit(int p,int y,int r){
principal =p;
years=y;
intrestrate =float(r)/100;
amount=principal;
for ( int i=0;i<y;i++){

amount = amount*(1+intrestrate);
}}
void bankdeposit::show(){
cout << "Your amount after " <<years<<": "<<endl;
cout<<"₹ "<<amount<< endl;
}
int main(){
int p; 
int y;
int r;
float R;
int op;

cout << "===== bankdeposit =====" << endl;
cout << "intrestrate in :" << endl;
cout << "1. Percentage (e.g. 5 means 5%)"<<endl
<<"2. Decimal (e.g. 0.05 means 5%)"<<endl;
cout << "_______________________________" << endl;
cin >> op;
switch (op){
case 1:{
cout << "enter your principal:" << endl;
cin >> p;
cout << "enter years:" << endl;
cin >> y;
cout << "enter intrestrate:" << endl;
cin >> r;
bankdeposit b1(p,y,r);
b1.show();
break;
}
case 2:{

cout << "enter your principal:" << endl;
cin >> p;
cout << "enter years:" << endl;
cin >> y;
cout << "enter intrestrate:" << endl;
cin >> R;
bankdeposit b2(p,y,R);
b2.show();
break;
}
  default:
  {   cout << " Invalid Operator" << endl;
  }}
  return 0;
}
